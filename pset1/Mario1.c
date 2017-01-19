#include<stdio.h>

int main(void)
{
	unsigned short int height;
	printf("Height:");
	scanf("%hu",&height);
	while(1)  
	{
    	if( height>0 && height<24 )
			break;
    	else
    	{ 	
    		printf("Retry:");
    		scanf("%hu",&height);
    		while (fgetc(stdin) != '\n')
        	;
    	}
	}
	for( int i = 0 ; i<height ; i++ )
	{
	    for( int s = 0 ; s<(height+1)-(i+2) ; s++ )
	    {
	      printf(" ");
	    }
	    for( int h=0 ; h<i+2 ; h++ )
	    {
	      printf("#");
	    }
	    printf("  ");
	    for( int h=0 ; h<i+2 ; h++ )
	    {
	      printf("#");
	    }
	    printf("\n");
	  }
}
