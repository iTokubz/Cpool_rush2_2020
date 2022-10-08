/*
** EPITECH PROJECT, 2020
** Day6
** File description:
** my_revstr
*/

int my_strlen(char *mot);

char *my_revstr(char *str)
{
    int i = 0;
    int j = my_strlen(str) - 1;
    char c;

    while (i < j) {
        c = str[j];
        str[j] = str[i];
        str[i] = c;
        i++;
        j--;
    }
    return (str);
}