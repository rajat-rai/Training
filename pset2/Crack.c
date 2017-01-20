#include <stdio.h>
#include <crypt.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main ( int argc, char *argv[] )
{
    if ( argc == 2 )
    {	
        char pass[5] = {'\0'};
        char dict[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int dicLen = strlen(dict);
        char *hash = argv[1];
        char salt[2];
        strncpy(salt, hash, 2);
        for( int i = 0 ; i<dicLen ; i++ )
        {
            pass[0] = dict[i];
            for( int j = 0 ; j<dicLen ; j++ )
            {
                pass[1] = dict[j];
                for( int k = 0 ; k<dicLen ; k++ )
                {   
                    pass[2] = dict[k];
                    for( int l = 0 ; l<dicLen ; l++ )
                    {
                        pass[3] = dict[l];
                        if(strcmp(crypt(pass , salt),hash)==0)
                        {
                            printf("%s\n",pass);
                            return 0;
                        }
                        //printf("pass: %s\nhash recieved : %s\n",pass,crypt(pass , salt));
                    }

                }

            }   

        }
    }
    else 
    {
        printf ("Usage: ./Crack hash\n");
        return 1;
    }
}

