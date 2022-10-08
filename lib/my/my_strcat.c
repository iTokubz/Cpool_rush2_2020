/*
** EPITECH PROJECT, 2020
** Day7
** File description:
** my_strcat
*/

int my_strlen(char *mot);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = my_strlen(dest);

    while (src[i] != '\0') {
        dest[j] = src[i];
        j++;
        i++;
    }
    dest[j] = '\0';
    return (dest);
}