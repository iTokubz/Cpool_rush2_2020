/*
** EPITECH PROJECT, 2020
** Day5
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int i = 1;

    if (nb <= 0 || nb > 2147483647)
        return (0);
    while (i <= nb) {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
}