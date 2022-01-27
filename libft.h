#include <stddef.h>
#ifdef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n);
int ft_isalnum(unsigned char c);
int ft_isalpha(unsigned char c);
int ft_isascii(unsigned char c);
int ft_isdigit(unsigned char c);
int ft_isprint(unsigned char c);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memset(void    *s, int c, size_t   n);
size_t  strlcat(char *dst, const char *src, size_t size);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlen(const char *s);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int strncmp(const char *s1, const char *s2, size_t n);

#endif