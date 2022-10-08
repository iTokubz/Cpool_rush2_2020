/*
** EPITECH PROJECT, 2020
** Day5
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    if (nb <= 1)
        return (0);
    for (int i = 2; i <= nb; i++) {
        if (nb % i == 0 && i != nb)
            return (0);
    }
    return (1);
}