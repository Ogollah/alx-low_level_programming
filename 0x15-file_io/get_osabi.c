#include "main.h"

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
		printf("  OS/ABI:                            UNIX - System AIX\n");
	else if (ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("  OS/ABI:                            UNIX - System HP-UX\n");
	else if (ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("  OS/ABI:                            UNIX - System NetBSD\n");
	else if (ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("  OS/ABI:                            UNIX - System Linux\n");
	else if (ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("  OS/ABI:                            UNIX - System Solaris\n");
	else if (ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("  OS/ABI:                            UNIX - System IRIX\n");
	else if (ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("  OS/ABI:                            UNIX - System FreeBSD\n");
	else if (ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("  OS/ABI:                            UNIX - System TRU64\n");
	else if (ident[EI_OSABI] == ELFOSABI_ARM)
		printf("  OS/ABI:                            UNIX - System ARM\n");
	else if (ident[EI_OSABI] == ELFOSABI_ARM_AEABI)
		printf("  OS/ABI:                            UNIX - System ARM_AEABI\n");
	else if (ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("  OS/ABI:                            Standalone App\n");
	else
		printf("  OS/ABI:                            <unknown: %x>\n",
		ident[EI_OSABI]);
}
