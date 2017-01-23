#define _XOPEN_SOURCE 
#include <stdlib.h>
#include <stdio.h>
#define LIMIT 65536

int main(int argc ,char *argv[])
{
    if( argc==2 || argc==3)
    {
        int num = atoi(argv[1]);
        long int seed = 0;
        if( argc ==3 )
        {
            seed = atoi(argv[2]);
            srand48(seed);
        }   
        for(int i =0 ; i< num ; i++)
        {
            printf("%d\n", (int)(drand48()* LIMIT));
        }   
        return 0;
    }
    else
    {
        printf("Usage: generate n [s]\n");
        return 1;
    }
}
