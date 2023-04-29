#include "main.h"

void elf_close(int fl_d);
void check_for_elf(unsigned char *ident, int fd);
void print_elf_magic(unsigned char *ident);
void print_elf_class(unsigned char *ident);
void print_elf_data(unsigned char *ident);
void print_elf_version(unsigned char *ident);
void print_elf_osabi(unsigned char *ident);
void print_elf_abi(unsigned char *ident);
void print_elf_type(unsigned int e_type, unsigned char *ident);
void print_elf_entry(unsigned long int e, unsigned char *ident);

/**
 *main - Displays the information contained in
 *       the ELF header at the start of an ELF file.
 *@argc: Arg count.
 *@argv: Point to args provided.
 *
 *Return: 0 Always (Success).
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int file_dec, file_r;
	Elf64_Ehdr *ehdr;

	file_dec = open(argv[1], O_RDONLY);

	if (file_dec == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read the file %s\n", argv[1]);
		exit(98);
	}
	ehdr = malloc(sizeof(Elf64_Ehdr));

	if (ehdr == NULL)
	{
		elf_close(file_dec);
		dprintf(STDERR_FILENO, "Error: Can't read the file %s\n", argv[1]);
		exit(98);
	}
	file_r = read(file_dec, ehdr, sizeof(Elf64_Ehdr));
	if (file_r == -1)
	{
		free(ehdr);
		elf_close(file_dec);
		dprintf(STDERR_FILENO, "Error: Can't read the file %s\n", argv[1]);
		exit(98);
	}
	check_for_elf(ehdr->e_ident, file_dec);
	printf("ELF Header:\n");
	print_elf_magic(ehdr->e_ident);
	print_elf_class(ehdr->e_ident);
	print_elf_data(ehdr->e_ident);
	print_elf_version(ehdr->e_ident);
	print_elf_osabi(ehdr->e_ident);
	print_elf_abi(ehdr->e_ident);
	print_elf_type(ehdr->e_type, ehdr->e_ident);
	print_elf_entry(ehdr->e_entry, ehdr->e_ident);

	free(ehdr);
	elf_close(file_dec);
	return (0);
}

/**
 *elf_close - Closes fd file.
 *@fl_d: file to close.
 *
 *Return: Void.
 */
void elf_close(int fl_d)
{
	if (close(fl_d) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_d);
		exit(98);
	}
}

/**
 *print_elf_entry - Prints the TYPE of ELF.
 *@e: Pointer to the ELF type in the header.
 *@ident: Pointer to ELF version headers.
 *
 *Return: Void.
 */
void print_elf_entry(unsigned long int e, unsigned char *ident)
{
	printf("  Entry point address:               ");

	if (ident[EI_DATA] == ELFDATA2MSB)
	{
		e = ((e << 8) & 0xFF00FF00) |
			  ((e >> 8) & 0xFF00FF);
		e = (e << 16) | (e >> 16);
	}
	if (ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e);
	else
		printf("%#lx\n", e);
}

/**
 *check_for_elf - Check if a file is an ELF file.
 *@ident: Pointer to array of ELF magic numbers.
 *@fd: file descripture.
 *
 *Return: Void.
 */

void check_for_elf(unsigned char *ident, int fd)
{
	if (ident[0] != 0x7f || ident[1] != 'E' ||
	    ident[2] != 'L' || ident[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an EFL file\n");
		close(fd);
		exit(98);
	}
}

/**
 *print_elf_abi - Prints abi on the ELF.
 *@ident: Pointer to the ELF osabi in the header.
 *
 *Return: Void.
 */
void print_elf_abi(unsigned char *ident)
{
	printf("  ABI Version:                       %d\n", ident[EI_ABIVERSION]);
}

/**
 *print_elf_class - Prints ELF classes.
 *@ident: Pointer to ELF header classes.
 *
 *Return: Void.
 */
void print_elf_class(unsigned char *ident)
{
	if (ident[EI_CLASS] == ELFCLASS32)
		printf("  Class:                             ELF32\n");
	else if (ident[EI_CLASS] == ELFCLASS64)
		printf("  Class:                             ELF64\n");
	else if (ident[EI_CLASS] == ELFCLASSNONE)
		printf("  Class:                             none\n");
	else
		printf("  Class:                             <unknown: %x>\n",
		ident[EI_CLASS]);
}

/**
 *print_elf_data - Prints ELF data.
 *@ident: Pointer to ELF header data.
 *
 *Return: Void.
 */
void print_elf_data(unsigned char *ident)
{
	printf("  Data:                              ");
	if (ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", ident[EI_DATA]);
}

/**
 *print_elf_magic - Prints magic number on the ELF.
 *@ident: Pointer to the ELF magic numbers in the header.
 *
 *Return: Void.
 */
void print_elf_magic(unsigned char *ident)
{
	int counter = 0;

	printf("  Magic:   ");
	while (counter < EI_NIDENT)
	{
		printf("%02x", ident[counter]);
		if (counter == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
		counter++;
	}
}

/**
 *print_elf_osabi - Prints osabi on the ELF.
 *@ident: Pointer to the ELF osabi in the header.
 *
 *Return: Void.
 */
void print_elf_osabi(unsigned char *ident)
{
	if (ident[EI_OSABI] == ELFOSABI_NONE)
		printf("  OS/ABI:                            UNIX - System V\n");
	else if (ident[EI_OSABI] == ELFOSABI_AIX)
		printf("  OS/ABI:                            UNIX - AIX\n");
	else if (ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("  OS/ABI:                            UNIX - HP-UX\n");
	else if (ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("  OS/ABI:                            UNIX - NetBSD\n");
	else if (ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("  OS/ABI:                            UNIX - Linux\n");
	else if (ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("  OS/ABI:                            UNIX - Solaris\n");
	else if (ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("  OS/ABI:                            UNIX - IRIX\n");
	else if (ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("  OS/ABI:                            UNIX - FreeBSD\n");
	else if (ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("  OS/ABI:                            UNIX - TRU64\n");
	else if (ident[EI_OSABI] == ELFOSABI_ARM)
		printf("  OS/ABI:                            UNIX - ARM\n");
	else if (ident[EI_OSABI] == ELFOSABI_ARM_AEABI)
		printf("  OS/ABI:                            UNIX - ARM_AEABI\n");
	else if (ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("  OS/ABI:                            Standalone App\n");
	else
		printf("  OS/ABI:                            <unknown: %x>\n",
		ident[EI_OSABI]);
}

/**
 *print_elf_type - Prints the TYPE of ELF.
 *@e_type: Pointer to the ELF type in the header.
 *@ident: Pointer to ELF version headers.
 *
 *Return: Void.
 */
void print_elf_type(unsigned int e_type, unsigned char *ident)
{
	if (ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	if (e_type == ET_NONE)
		printf("NONE (None)\n");
	else if (e_type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (e_type == ET_DYN)
		printf("DYN (Shared file)\n");
	else if (e_type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("unknown\n");
}

/**
 *print_elf_version - Prints the ELF version
 *@ident: Pointer to ELF version headers.
 *
 *Return: Void.
 */
void print_elf_version(unsigned char *ident)
{
	if (ident[EI_VERSION] == EV_CURRENT)
		printf("  Version:                           %d (current)\n",
		ident[EI_VERSION]);
	else
		printf("\n");
}
