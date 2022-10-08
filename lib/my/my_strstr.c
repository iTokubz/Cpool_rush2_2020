/*
** EPITECH PROJECT, 2020
** Day6
** File description:
** my_strstr
*/

char *my_strstr_suite(int i, char *str, char const *to_find)
{
    int j = 0;

    while (str[i + j] == to_find[j]) {
        if (to_find[j + 1] == '\0')
            return (str + i);
        j++;
    }
    return (0);
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;

    if (to_find[0] == '\0')
        return (str);
    while (str[i] != '\0') {
        if (my_strstr_suite(i, str, to_find) != 0)
            return (my_strstr_suite(i, str, to_find));
        i++;
    }
    return (0);
}
