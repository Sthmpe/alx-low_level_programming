#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int How_many_word(char *str);
int length(char *str);
#endif
