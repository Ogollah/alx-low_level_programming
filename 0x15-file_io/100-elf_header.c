#include "main.h"

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
		close(file_dec);
		dprintf(STDERR_FILENO, "Error: Can't read the file %s\n", argv[1]);
		exit(98);
	}
	file_r = read(file_dec, ehdr, sizeof(Elf64_Ehdr));
	if (file_r == -1)
	{
		close(file_dec);
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
	print_elf_type(ehdr->e_type);
	print_elf_entry(ehdr->e_entry);

	free(ehdr);
	close(file_dec);
	return (0);
}
