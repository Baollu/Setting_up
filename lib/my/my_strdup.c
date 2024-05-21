/*
** EPITECH PROJECT, 2023
** strdunp
** File description:
** strdunp
*/

#include "include/my.h"
#include "include/struct.h"
#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *str;
    int i = 0;

    str = malloc(sizeof(char) * (my_strlen(src) + 1));
    for (i = 0; src[i] != '\0'; i++){
        str[i] = src[i];
    }
    str[i] = '\0';
    return (str);
}
