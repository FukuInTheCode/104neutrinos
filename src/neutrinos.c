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
    if (argc == 5)
        return handle_args(argv + 1);
    return 84;
}
