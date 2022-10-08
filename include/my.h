/*
** EPITECH PROJECT, 2020
** Rush2
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>

#define ABS(x)  (x < 0 ? x *= -1: x);

typedef struct infos_case_s
{
    char c;
    int number;
    float p;
} infos_case_t;

void my_putchar(char c);
char *my_strlowcase(char *str);
int my_putstr(const char *str);
int my_str_match(char c, char* str);
int my_strlen(char const *str);
int my_put_nbr(int nb);
int my_how_many_char(char *str);
int my_itoa(float number);
int my_char_isalnum(char c);
int my_how_many_char(char *str);
void my_struct_incr(infos_case_t *my_case, char l, char c);
void print_float(float number);
void find_language(infos_case_t *my_case);
char my_char_lower(char c);

#endif /* MY_H_ */
