#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main ( int argc, char *argv[] )
{
    if ( argc == 2 )
    {	
    	char msg[256]={'\0'};
    	char *key = argv[1];
    	int lenK = strlen(key);
    	for( int i = 0 ; i<lenK ; i++ )
    	{
    		if(!(isalpha(key[i])))
    		{
    			printf ("Non-alphabetic chararter found in Key\n");
    			return (1);
    		}
    	}
    	printf ("plaintext:");
    	scanf ("%255[^\t\n]s",msg);
    	int lenM = strlen(msg);
    	char *ptr = key;
    	for( int i = 0 , pos = 0 ; i<lenM ; i++ , pos++ )
    	{
//    		msg[i]=(char)(((int)(msg[i]+argv[1]))%26);
			if(isalpha(msg[i]))
        	{
            	if(islower(msg[i]))
            	{
               		msg[i] = (char)((((msg[i] - 97)+key[pos])%26)+97);
            	}
            	else
            	{
               		msg[i] = (char)((((msg[i] - 65)+key[pos])%26)+65);
            	}
        	}
        	pos %= pos + lenK;
    	}
    	printf ("ciphertext:%s\n",msg);
    	return (0);
    }
    else 
    {
    	printf ("Error!\n");
    	return (1);
    }
}
