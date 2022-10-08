/*
** EPITECH PROJECT, 2020
** Rush2
** File description:
** my_itoa
*/

void my_putchar(char c);

int my_put_nbr(int n);

int my_int_length(int number)
{
    int i = 0;

    while (number / 10 > 0) {
        number = number / 10;
        i++;
    }
    return (i);
}

void print_float(float number)
{
    int n = number;
    int index = my_int_length(n);
    int second;

    my_putchar('(');
    my_put_nbr(n);
    my_putchar('.');
    second = number * 100;
    second = second % 100;
    if (second < 10)
        my_putchar('0');
    my_put_nbr(second);
    my_putchar('%');
    my_putchar(')');
}