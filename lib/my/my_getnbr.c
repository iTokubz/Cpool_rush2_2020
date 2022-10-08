/*
** EPITECH PROJECT, 2020
** Day4
** File description:
** my_getnbr
*/

#include <unistd.h>

void my_putchar(char c);

int my_getnbr(char const *str)
{
    int i = 0;
    int neg = 1;
    long number = 0;

    while (str[i] != '\0' && (str[i] == '-' || str[i] == '+')) {
        if (str[i] == '-')
            neg *= -1;
        i++;
    }
    while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9')) {
        number = number * 10 + (str[i] - '0');
        i++;
    }
    number *= neg;
    if (number > 2147483647 || number < -2147483648)
        return (0);
    return (number);
}