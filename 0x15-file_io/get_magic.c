#include "main.h"

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
	while (ident[counter] < EI_NIDENT)
	{
		print("%02x ", ident[counter] & 0xff);
	}
	printf("\n");
}
