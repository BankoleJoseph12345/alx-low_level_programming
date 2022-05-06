
joseph@jose-pc MINGW64 ~
$ ssh 6a37f91fa422@6a37f91fa422.b5e9b37f.alx-cod.online
6a37f91fa422@6a37f91fa422.b5e9b37f.alx-cod.online's password:
root@6a37f91fa422:/# cd alx-low_level_programming
root@6a37f91fa422:/alx-low_level_programming# mmkdir 0x15-file_io
bash: mmkdir: command not found
root@6a37f91fa422:/alx-low_level_programming# mkdir 0x15-file_io
root@6a37f91fa422:/alx-low_level_programming# cd 0x15-file_io
root@6a37f91fa422:/alx-low_level_programming/0x15-file_io# echo readme > README.md
root@6a37f91fa422:/alx-low_level_programming/0x15-file_io# cat > main.h
^D^C
root@6a37f91fa422:/alx-low_level_programming/0x15-file_io# ^C
root@6a37f91fa422:/alx-low_level_programming/0x15-file_io# cat > main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
root@6a37f91fa422:/alx-low_level_programming/0x15-file_io# git add .
root@6a37f91fa422:/alx-low_level_programming/0x15-file_io# git commit -m 'Main header file'
[master 038fa2a] Main header file
 2 files changed, 17 insertions(+)
 create mode 100644 0x15-file_io/README.md
 create mode 100644 0x15-file_io/main.h
root@6a37f91fa422:/alx-low_level_programming/0x15-file_io# git push
Username for 'https://github.com': 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
Password for 'https://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@github.com':
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 533 bytes | 533.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/BankoleJoseph12345/alx-low_level_programming.git
   f19bd60..038fa2a  master -> master
root@6a37f91fa422:/alx-low_level_programming/0x15-file_io# cat > 0-read_textfile.c
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to text in a file
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t file, fread, fwrite;
    char *totalSize;

    totalSize = malloc(sizeof(char) * letters);
    if (totalSize == NULL)
        return (0);
    if (filename == NULL)
        return (0);

    file = open(filename, O_RDONLY);
    if (file == -1)
        return (0);
    fread = read(file, totalSize, letters);
    if (fread == -1)
        return (0);
    fwrite = write(STDOUT_FILENO, totalSize, fread);
    if (fwrite == -1)
        return (0);
    close(file);
    free(totalSize);
    return (fwrite);
}
root@6a37f91fa422:/alx-low_level_programming/0x15-file_io# git add .
root@6a37f91fa422:/alx-low_level_programming/0x15-file_io# git commit -m 'Textfile'
[master 1d5fb85] Textfile
 1 file changed, 32 insertions(+)
 create mode 100644 0x15-file_io/0-read_textfile.c
root@6a37f91fa422:/alx-low_level_programming/0x15-file_io# git push
Username for 'https://github.com': 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
Password for 'https://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@github.com':
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 727 bytes | 727.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/BankoleJoseph12345/alx-low_level_programming.git
   038fa2a..1d5fb85  master -> master
root@6a37f91fa422:/alx-low_level_programming/0x15-file_io# cat > main.h
#ifndef HOLBERTON_H
#define HOLBERTON_N

#include <elf.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/**
 * ELF header functions
*/
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
#endif
