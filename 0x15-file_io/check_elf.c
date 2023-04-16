#include "main.h"
/**
 *check_for_elf - Check if a file is an ELF file.
 *@ident: Pointer to array of ELF magic numbers.
 *@fd: file descripture.
 *
 *Return: Void.
 */

void check_for_elf(unsigned char *ident, int fd)
{
	if (ident[0] != 0x7f || ident[1] != 'E' ||
	    ident[2] != 'L' || ident[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an EFL file\n");
		close(fd);
		exit(98);
	}
}
