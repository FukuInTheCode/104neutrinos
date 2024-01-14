/*
** EPITECH PROJECT, 2023
** neutrinos.c
** File description:
** neutrinos.c
*/

#include <my.h>


int main(int argc, char **argv, char **envp)
{
    if (argc == 2 && !strcmp(argv[1], "-h"))
        return show_usage();
    return 0;
}
