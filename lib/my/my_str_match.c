/*
** EPITECH PROJECT, 2020
** Rush2
** File description:
** my_str_match
*/

char my_char_lower(char c);

int my_char_is_alnum(char c);

int my_str_match(char c, char* str)
{
    int i = 0;
    char cpy;

    while (str[i] != '\0') {
        cpy = my_char_lower(str[i]);
        if (cpy == c)
            return (1);
        i++;
    }
    return (0);
}