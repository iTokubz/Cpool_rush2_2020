/*
** EPITECH PROJECT, 2020
** Day6
** File description:
** my_str_isupper
*/

int my_str_isupper(char const *str)
{
    int i = 0;

    if (str[i] == '\0')
        return (0);
    while (str[i] != '\0') {
        if (str[i] < 'A' || str[i] > 'Z')
            return (0);
        i++;
    }
    return (1);
}