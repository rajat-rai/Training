#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
	char name[81]={'\0'},init[11]={'\0'};
	unsigned short int pos=0;
	scanf("%80[^\t\n]s",name);
	unsigned short int len = strlen(name);
	//	printf("Len=%d\nstr:%s\n",len,name);
	const char s[2] = " ";
    char *token;
   	token = strtok(name, s);
   	for(pos=0; token != NULL;pos ++ ) 
   	{
   		//printf( " %s\n", token );
     	init[pos]=toupper(token[0]);
	 	token = strtok(NULL, s);
   	}
	printf("%s\n",init);
	return(0);
}	
