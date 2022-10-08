/*
** EPITECH PROJECT, 2020
** Day6
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != '\0' && i < n) {
        dest[i] = src[i];
        i++;
    }
    if (src[i] == '\0')
        dest[i] = '\0';
    return (dest);
}