/*
** EPITECH PROJECT, 2020
** Day6
** File description:
** my_putnbr_base
*/

#include <unistd.h>

void my_putchar(char c);

int my_strlen(const char *mot);

int my_putnbr_base(int nbr, char const *base)
{
    unsigned int number = 0;
    unsigned int len;

    len = my_strlen(base);
    if (nbr < 0) {
        my_putchar('-');
        number -= nbr;
    } else
        number = nbr;
    if (number >= len)
        my_putnbr_base(nbr / len, base);
    my_putchar(base[number % len]);
    return (0);
}
