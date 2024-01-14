/*
** EPITECH PROJECT, 2023
** handle_args.c
** File description:
** handle_args.c
*/

#include <my.h>

int handle_args(char **argv)
{
    char *end_ptr = NULL;
    long n = strtol(argv[0], &end_ptr, 10);
    double a = 0.;
    double h = 0.;
    double sd = 0.;

    if (end_ptr != argv[0] + strlen(argv[0]) || n < 0)
        return 84;
    a = strtod(argv[1], &end_ptr);
    if (end_ptr != argv[1] + strlen(argv[1]))
        return 84;
    h = strtod(argv[2], &end_ptr);
    if (end_ptr != argv[2] + strlen(argv[2]))
        return 84;
    sd = strtod(argv[3], &end_ptr);
    if (end_ptr != argv[3] + strlen(argv[3]) || sd < 0)
        return 84;
    return do_loop(n, a, h, sd);
}
