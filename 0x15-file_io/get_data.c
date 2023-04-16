#include "main.h"

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
