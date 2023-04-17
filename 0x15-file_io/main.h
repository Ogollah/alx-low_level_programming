#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void check_for_elf(unsigned char *ident, int fd);
void print_elf_magic(unsigned char *ident);
void print_elf_class(unsigned char *ident);
void print_elf_data(unsigned char *ident);
void print_elf_version(unsigned char *ident);
void print_elf_osabi(unsigned char *ident);
void print_elf_abi(unsigned char *ident);
void print_elf_type(Elf64_Ehdr header);
void print_elf_entry(Elf64_Ehdr e_entry);

#endif
