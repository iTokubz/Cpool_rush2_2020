/*
** EPITECH PROJECT, 2020
** Day8
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

int my_strlen(char *mot);

int my_char_is_alnum(char c);

static int count_word(char const *str)
{
    int i = 0;
    int number = 0;

    while (str[i] != '\0') {
        if (i == 0 && my_char_is_alnum(str[i]))
            number++;
        else if (my_char_is_alnum(str[i]) && !my_char_is_alnum(str[i - 1]))
            number++;
        i++;
    }
    return (number);
}

static int start_index(char const *str, int index)
{
    int i = 0;
    int index_a = 0;

    if (my_char_is_alnum(str[i]) && index == 0)
        return (0);
    while (str[i] != '\0') {
        if (my_char_is_alnum(str[i]) && !my_char_is_alnum(str[i - 1]))
            index_a++;
        if (index_a == index + 1)
            return (i);
        i++;
    }
    return (0);
}

static char* get_word_index(char const *str, int index)
{
    char *word;
    int i = start_index(str, index);
    int j = i;

    while (my_char_is_alnum(str[j]))
        j++;
    word = malloc(sizeof(*word) * (j - i + 1));
    j = 0;
    while (my_char_is_alnum(str[i])) {
        word[j] = str[i];
        j++;
        i++;
    }
    word[j] = '\0';
    return (word);
}

char **my_str_to_word_array(char const *str)
{
    char **tab;
    char *word;
    int i = 0;
    int number_of_word;

    number_of_word = count_word(str);
    tab = malloc(sizeof(*tab) * (number_of_word + 1));
    while (i < number_of_word) {
        word = get_word_index(str, i);
        tab[i] = malloc(sizeof(**tab) * (my_strlen(word) + 1));
        tab[i] = word;
        i++;
    }
    tab[i] = 0;
    return (tab);
}