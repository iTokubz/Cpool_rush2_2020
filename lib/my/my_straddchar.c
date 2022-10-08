/*
** EPITECH PROJECT, 2020
** Day8
** File description:
** my_straddchar
*/

int my_strlen(char *mot);

char *my_straddchar(char *dest, char a)
{
    int i = 0;
    int j = my_strlen(dest);

    dest[j] = a;
    dest[j + 1] = '\0';
    return (dest);
}