/*
** EPITECH PROJECT, 2020
** Day6
** File description:
** my_getnbr_base
*/

#include <stdio.h>

int my_strlen(char const *mot)
{
    int i = 0;

    while (mot[i] != '\0')
        i++;
    return (i);
}

int get_in_base(char c, char const *base)
{
    int i = 0;

    while (base[i] != '\0') {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

int my_getnbr_base(char const *str, char const *base)
{
    int i = 0;
    int neg = 1;
    int result = 0;
    int size = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            neg *= -1;
        i++;
    }
    while (get_in_base(str[i], base) != -1) {
        if (size > 10)
            return (0);
        result = result * my_strlen(base);
        result = result + get_in_base(str[i], base);
        i++;
        size++;
    }
    return (result);
}