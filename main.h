#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf_bin_recursive(unsigned int n, int chara);
int _printf_bin(va_list args);
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
