/*
** EPITECH PROJECT, 2020
** Day7
** File description:
** my_strncat
*/

int my_strlen(char *mot);

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = my_strlen(dest);

    while (src[i] != '\0' && i < nb) {
        dest[j] = src[i];
        j++;
        i++;
    }
    dest[j] = '\0';
    return (dest);
}