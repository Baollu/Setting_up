/*
** EPITECH PROJECT, 2023
** test
** File description:
** test
*/

#ifndef P_MY_H
    #define P_MY_H
    #include "struct.h"

int load_file(char const *filepath);
int count_back_slash(char const *buffer);
int count_char(char const *buffer);
set_t *conversion(char *file);
char *generate_map(char const *file);
int map_param(char *pattern, int nb);
int setting(int l, int len_pattern);
char **pattern_2d(int nb, char **array, char *pattern);
set_t *generate_pattern(char *pattern, int nb);
int nb_cols(char const *file);
int nb_line(char const *file);
int skip_first_line(char const *file);

#endif
