#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

void _putchar(char p);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
long int infinite_add(char *n1, char *n2);
void print_buffer(char *b, int size);
int _strlen(char *s);
long int string_to_integer(char *n);
long int add_string(char *n1, char *n2);
char *buffer_sum(char *n1, char *n2, char *r);
#endif
