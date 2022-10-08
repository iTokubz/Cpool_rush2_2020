/*
** EPITECH PROJECT, 2020
** Day6
** File description:
** my_strcapitalize
*/

char *my_strlowcase(char *str);

int my_char_isalnum(char c);

int my_char_lw(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

char* my_strcapitalize(char *str)
{
    int i = 0;

    my_strlowcase(str);
    while (str[i] != '\0') {
        if (my_char_lw(str[i]) && (i == 0 || !my_char_isalnum(str[i - 1])))
            str[i] -= 32;
        i++;
    }
    return (str);
}