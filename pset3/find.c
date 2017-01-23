#define _XOPEN_SOURCE 
#include <stdio.h>
#include <stdlib.h>
#include "helpers.h"
//#include <ncurses.h>
// maximum amount of hay
const int MAX = 65536;

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        printf("Usage: ./find needle\n");
        return -1;
    }

    // remember needle
    int needle = atoi(argv[1]);

    // fill haystack
    int size;
    int haystack[MAX];
    int straw;
    for (size = 0; size < MAX; size++)
    {
        // wait for hay until EOF
        if (fgetc(stdin) == EOF)
        {
            break;
        }
        // add hay to stack
        scanf("%d\n",&straw);
        haystack[size] = straw;
        printf("haystack[%d] = %d\n", size, haystack[size]);
    }
    printf("\n");

    // sort the haystack
    sort(haystack, size);

    // try to find needle in haystack
    if (search(needle, haystack, size))
    {
        printf("\nFound needle in haystack!\n\n");
        return 0;
    }
    else
    {
        printf("\nDidn't find needle in haystack.\n\n");
        return 1;
    }
}
