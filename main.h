#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf_chars(char c, char *buffer, int *index, int *char_count);
int _printf_strs(char *str, char *buffer, int *index, int *char_count);
int _printf_ints(int n, char *buffer, int *index, int *char_count);
int _printf_unsigneds(unsigned int n, char *buffer, int *index, int *char_count);
int _printf_unsigned_recursives(unsigned int n, char *buffer, int *index, int *char_count);

int _printf_S(char *str, char *buffer, int *index, int *char_count);

int _printf_bin_recursive(unsigned int n, int chara);
int _printf_bin(va_list args);
int _printf_X(va_list args);
int _printf_x(va_list args);
int _printf_u(va_list args);
int _printf_o(va_list args);
int _printf_int(int n);
int _printf_str(char *str);
int _printf_char(int c);
int _printf_unsigned_recursive(unsigned int n);
int _printf_unsigned(unsigned int n);


int _printf(const char *format, ...);
int _print_char(int c, int w, int z_d, int l_a);
int _print_str(char *s, int w, int p, int z_d, int l_a);
int _print_37(int w, int z_d, int l_a);
int _print_num(int n, int p_f, int s_f, int h_f, int w, int p, int z_d, int l_a);
int _print_bin(unsigned int n, int w, int z_d, int l_a);
int _print_unsigned(unsigned int n, int w, int p, int z_d, int l_a);
int _print_oct(unsigned int n, int h_f, int w, int p, int z_d, int l_a);
int _print_hex(unsigned int n, char sp, int w, int p, int z_d, int l_a);
int _print_custom_s(char *s, int w, int p, int z_d, int l_a);
int _print_pointer(void *ptr, int w, int z_d, int l_a);
int _print_reverse(char *s, int w, int p, int z_d, int l_a);
int _print_rot13(char *s, int w, int p, int z_d, int l_a);
int pu_ts(char *s);
int put_char(char c);

#endif
