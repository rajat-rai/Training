#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
	char name[81] = {'\0'}, initials[11] = {'\0'};
	unsigned short int pos = 0;
	scanf("%80[^\t\n]s",name);
	unsigned short int len = strlen(name);
	//	printf("Len=%d\nstr:%s\n",len,name);
	const char s[2] = " ";
    char *token;
   	token = strtok(name, s);
   	for( pos=0 ; token != NULL ; pos ++ ) 
   	{
   		//printf( " %s\n", token );
     	initials[pos]=toupper(token[0]);
	 	token = strtok(NULL, s);
   	}
	printf("%s\n",initials);
	free(token);
	token = NULL;
	return(0);
}	
