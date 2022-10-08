/*
** EPITECH PROJECT, 2020
** Day6
** File description:
** my_showstr
*/

void my_putchar(char c);

int my_strlen(char const *str);

int my_putnbr_base(int nbr, char const *base);

int my_showstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] > 126) {
            my_putchar('\\');
            my_putchar(48);
            my_putnbr_base(str[i], "0123456789abcdef");
        } else {
            my_putchar(str[i]);
        }
        i++;
    }
    return (0);
}