#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main ( int argc, char *argv[] )
{
    if ( argc == 2 )
    {	
    	char msg[256] = {'\0'};
    	int key = atoi(argv[1]);
    	printf ("plaintext:");
    	scanf ("%255[^\t\n]s",msg);
    	int len = strlen(msg);
    	for ( int i =0 ; i<len ; i++ )
    	{
//    		msg[i]=(char)(((int)(msg[i]+argv[1]))%26);
			if (isalpha(msg[i]))
        	{
            	if (islower(msg[i]))
            	{
               		msg[i] = (char)((((msg[i] - 97)+key)%26)+97);
            	}
            	else
            	{
               		msg[i] = (char)((((msg[i] - 65)+key)%26)+65);
            	}
        	}
    	}
    	printf ("ciphertext:%s\n",msg);
    	return(0);
    }
    else 
    {
    	printf ("Error!\n");
    	return(1);
    }
}
    	
