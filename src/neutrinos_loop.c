/*
** EPITECH PROJECT, 2023
** neutrinos_loop.c
** File description:
** neutrinos_loop.c
*/

#include <my.h>

static int compute_means(long *n, double *means[4], double value)
{
    int error = 0;
    double *a = *means;
    double *h = *(means + 1);
    double *sd = *(means + 2);
    double *quad = *(means + 3);

    *quad = sqrt(((pow(*sd, 2) + pow(*a, 2)) * *n +
        pow(value, 2)) / (*n + 1.));
    *sd = sqrt((((pow(*sd, 2) + pow(*a, 2)) * *n +
        pow(value, 2)) / (*n + 1.)) - pow(((*a * *n) + value) / (*n +1.), 2));
    *a = ((*a * *n + value) / (*n + 1.));
    *h = (*n + 1.) / ((*n / *h + 1. / value));
    (*n)++;
    return error;
}

int do_loop(long *n, double *a, double *h, double *sd)
{
    double v = 0.;
    char *end_ptr = NULL;
    char s[1001] = {0};
    int error = 0;
    double quad = 0.;

    for (bool is_looping = true; is_looping; memset(s, 0, 1001)) {
        printf("Enter next value: ") && scanf("%s", s);
        v = strtod(s, &end_ptr);
        error |= 84 * ((end_ptr != s + strlen(s)
            || v == 0.) && strcmp("END", s));
        error |= compute_means(n, (double *[4]){a, h, sd, &quad}, v);
        is_looping = !(!strcmp("END", s) || error);
        is_looping && printf("\tNumber of values:\t%ld\n\t"
            "Standard deviation:\t%.2lf\n\tArithmetic mean:\t%.2lf"
            "\n\tRoot mean square:\t%.2lf\n\tHarmonic mean:\t\t%.2lf\n\n",
            *n, *sd, *a, quad, *h);
    }
    return error;
}
