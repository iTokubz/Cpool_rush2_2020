/*
** EPITECH PROJECT, 2020
** Day3
** File description:
** my_put_nbr
*/

#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb)
{
    unsigned int number = 0;

    if (nb < 0) {
        my_putchar('-');
        number -= nb;
    } else {
        number = nb;
    }
    if (number > 9)
        my_put_nbr(number / 10);
    my_putchar(number % 10 + 48);
    return (0);
}