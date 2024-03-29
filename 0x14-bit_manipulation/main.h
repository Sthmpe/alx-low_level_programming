#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stddef.h>

unsigned int binary_to_uint(const char *b);
int check_valid_string(const char *b);
int _putchar(char p);
void print_binary(unsigned long int n);
void convert_to_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
unsigned int count_bit(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif