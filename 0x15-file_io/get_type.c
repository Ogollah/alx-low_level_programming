#include "main.h"

/**
 *print_elf_type - Prints the TYPE of ELF.
 *@e_type: Pointer to the ELF type in the header.
 *
 *Return: Void.
 */
void print_elf_type(Elf64_Ehdr e_type)
{
	printf("ELF TYPE: ");

	if (e_type.e_type == ET_NONE)
		printf("  Type:                              NONE (None)\n");
	else if (e_type.e_type == ET_REL)
		printf("  Type:                              REL (Relocatable file)\n");
	else if (e_type.e_type == ET_EXEC)
		printf("  Type:                              EXEC (Executable file)\n");
	else if (e_type.e_type == ET_DYN)
		printf("  Type:                              DYN (Shared file)\n");
	else if (e_type.e_type == ET_CORE)
		printf("  Type:                              CORE (Core file)");
	else
		printf("  Type:                              <unknown: %x>\n", e_type);
}
