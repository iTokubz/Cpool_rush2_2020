/*
** EPITECH PROJECT, 2020
** Day8
** File description:
** my_show_word_array
*/

void my_putchar(char c);

void my_putstr(char *mot);

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (tab[i]) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}