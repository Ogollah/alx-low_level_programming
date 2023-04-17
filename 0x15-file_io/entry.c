#include "main.h"

/**
 *print_elf_entry - Prints the TYPE of ELF.
 *@e_entry: Pointer to the ELF type in the header.
 *
 *Return: Void.
 */
void print_elf_entry(Elf64_Ehdr e_entry)
{
	printf("  Entry point address:               %lx\n",
	(unsigned long)e_entry.e_entry);
}
