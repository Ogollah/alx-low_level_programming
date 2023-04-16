#include "main.h"

/**
 *print_elf_version - Prints the ELF version
 *@ident: Pointer to ELF version headers.
 *
 *Return: Void.
 */
void print_elf_version(unsigned char *ident)
{
	if (ident[EI_VERSION] == EV_CURRENT)
		printf("  Version:                           %d (current)",
		ident[EI_VERSION]);
}
