/*
** EPITECH PROJECT, 2020
** Day4
** File description:
** my_putstr
*/

#include <unistd.h>

void my_putchar(char c);

int my_putstr(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}