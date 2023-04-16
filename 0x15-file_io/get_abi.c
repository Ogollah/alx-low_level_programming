#include "main.h"

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
