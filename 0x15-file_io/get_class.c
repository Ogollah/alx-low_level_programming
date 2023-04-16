#include "main.h"

/**
 *print_elf_class - Prints ELF classes.
 *@ident: Pointer to ELF header classes.
 *
 *Return: Void.
 */
void print_elf_class(unsigned char *ident)
{
	if (ident[EI_CLASS] == ELFCLASS32)
		printf("  Class:                             ELF32");
	else if (ident[EI_CLASS] == ELFCLASS64)
		printf("  Class:                             ELF64");
	else if (ident[EI_CLASS] == ELFCLASSNONE)
		printf("  Class:                             none\n");
	else
		printf("  Class:                             <unknown: %x>\n",
		ident[EI_CLASS]);
}
