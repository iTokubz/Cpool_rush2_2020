/*
** EPITECH PROJECT, 2020
** Rush2
** File description:
** rush2
*/

#include "include/my.h"

void my_show_param(infos_case_t *my_case)
{
    for (int i = 0; my_case[i].c != '\0'; i++) {
        my_putchar(my_case[i].c);
        my_putchar(':');
        my_put_nbr(my_case[i].number);
        my_putchar(' ');
        print_float(my_case[i].p);
        my_putchar('\n');
    }
}

void my_struct_incr(infos_case_t *my_case, char l, char s)
{
    char cpy;

    if (my_char_lower(l) == s) {
        for (int i = 0; my_case[i].c != '\0'; i++) {
            cpy = my_char_lower(my_case[i].c);
            my_case[i].number += (cpy == s ? 1 : 0);
        }
    }
}

void rush(char *str, char *letter, infos_case_t *my_case)
{
    int j;

    str = my_strlowcase(str);
    for (j = 0; letter[j] != '\0'; j++) {
        my_case[j].number = 0;
        my_case[j].c = letter[j];
    }
    my_case[j].c = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        for (int k = 0; letter[k] != '\0'; k++) {
            my_struct_incr(my_case, letter[k], str[i]);
        }
    }
    for (int i = 0; my_case[i].c != '\0'; i++)
        my_case[i].p = (my_case[i].number / (float)
        my_how_many_char(str)) * 100;
    my_show_param(my_case);
    find_language(my_case);
}

int main(int argc, char *argv[])
{
    infos_case_t my_case[argc - 1];
    char letter[argc - 1];
    int i;

    if (argc <= 2 || argv[1][0] == '\0')
        return (84);
    if (my_how_many_char(argv[1]) == 0)
        return (84);
    for (i = 2; i < argc; i++) {
        if (my_strlen(argv[i]) > 1)
            return (0);
        letter[i - 2] = argv[i][0];
    }
    letter[i - 2] = '\0';
    rush(argv[1], letter, my_case);
}