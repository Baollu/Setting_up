/*
** EPITECH PROJECT, 2024
** lenght
** File description:
** lenght
*/

#include "include/p_my.h"
#include "include/my.h"
#include "include/struct.h"

int nb_line(char const *file)
{
    int line = 0;

    for (int i = 0; file[i] != '\0'; i++){
        if (file[i] == '\n'){
            line++;
        }
    }
    line = line - 1;
    return line;
}

int skip_first_line(char const *file)
{
    int i = 0;

    while (file[i] != '\n'){
        i++;
    }
    return i;
}

int nb_cols(char const *file)
{
    int cols = 0;
    int i = 0;

    i = skip_first_line(file);
    i = i + 1;
    while (file[i] != '\n'){
        i++;
        cols++;
    }
    return cols;
}
