#ifndef _HEADER_FILE_
#define _HEADER_FILE_

#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
char *create_buffer(char *file);
void close_file(int d);

#endif
