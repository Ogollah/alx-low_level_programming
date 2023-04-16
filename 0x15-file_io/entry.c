#include "main.h"

/**
 *print_elf_entry - Prints the TYPE of ELF.
 *@e_entry: Pointer to the ELF type in the header.
 *
 *Return: Void.
 */
void print_elf_entry(unsigned char *e_entry)
{
	printf("  Entry point address:               %lx\n", (unsigned long)e_entry);
}
