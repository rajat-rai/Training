#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
  long long int cardNum;
  char rawInput[17] = "\0";
  unsigned short int i = 0, sumOdd = 0, sumEven = 0, temp = 0, len = 0,flag = 1 ;
  printf ("Number:");
  //printf("Input len:%hu\n",len);
  do
  {
  	scanf("%16s",rawInput);
  	len=strlen(rawInput);
  	if ( len<13 || len>16 )
 	{
  		printf("Retry:");
  		continue;
  	}
  	for ( i = 0 ; i<len ; i++ )
 	{
  		if( ! ( rawInput[i]>='0' && rawInput[i]<='9') )
  		{
  			printf("Retry:");
  			continue;
  		}
  	}
  	flag = 0;
  }
  while( flag );
  sscanf ( rawInput , "%lld" , &cardNum );
  //printf ("%s -> %lld\n",rawInput,cardNum);
  unsigned short int *cardNumArr = (unsigned short int*) calloc(strlen(rawInput),sizeof(unsigned short int));
  for( i=len-1 ; cardNum ; i-- )
  {
  	cardNumArr[i] = cardNum%10;
  	cardNum /=10;
  }
  /*for(i=0;i<len;i++)
  {
  	printf ("Index %d -> %hu\n",i,cardNumArr[i]);
  }*/ 	
  for( i = 0 ; i<len ; i++ )
  {
  	if( i%2==0 )
  	{
  		sumEven += cardNumArr[i];
  	}
  	else
  	{
		 if(cardNumArr[i]*2>10)
		 {
		 	temp = cardNumArr[i]*2;
			sumOdd += temp%10;
			temp /= 10;
			sumOdd += temp;
		 }
		 else
		 {
		 	sumOdd += cardNumArr[i]*2;
		 }
     }
  }
  //printf("sumO :%d sumE :%d\n",sumOdd,sumEven);
  if( ( sumOdd + sumEven ) %10==0 )
  {
  	if( cardNumArr[0]==3 && ( cardNumArr[1]==4 || cardNumArr[1]==7 ) )
  	{
  		printf ("AMEX\n");
  	}
  	else if( cardNumArr[0]==5 && ( cardNumArr[1]==1 || cardNumArr[1]==2 || cardNumArr[1]==3 || cardNumArr[1]==4 || cardNumArr[1]==5 ) )
  	{
  		printf ("MASTERcardNum\n");
  	}
  	else if ( cardNumArr[0]==4 )
  	{
  		printf ("VISA\n");
  	}

  }
  else
  {
  	printf ("INVALID\n");
  }
  free (cardNumArr);
  cardNumArr = NULL;
  return (0);
}
