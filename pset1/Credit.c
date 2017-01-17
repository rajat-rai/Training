#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
  long long int card;
  char str[17]="\0";
  unsigned short int i = 0,sum_odd = 0,sum_even = 0,temp = 0,len =0;
  printf("Number:");
  re:
  scanf("%16s",str);
  len=strlen(str);
  //printf("Input len:%hu\n",len);
  if(len<13 || len>16)
  {
  	printf("Retry:");
  	goto re;
  }
  for(i=0;i<len;i++)
  {
  	if(!(str[i]>='0' && str[i]<='9') )
  	{
  		printf("Retry:");
  		goto re;
  	}
  }
  sscanf (str,"%lld",&card);
  //printf ("%s -> %lld\n",str,card);
  unsigned short int *card_arr=(unsigned short int*)calloc(strlen(str),sizeof(unsigned short int));
  for(i=len-1;card;i--)
  {
  	card_arr[i]=card%10;
  	card/=10;
  }
  /*for(i=0;i<len;i++)
  {
  	printf ("Index %d -> %hu\n",i,card_arr[i]);
  }*/ 	
  for(i=0;i<len;i++)
  {
  	if(i%2==0)
  	{
  		sum_even+=card_arr[i];
  	}
  	else
  	{
		 if(card_arr[i]*2>10)
		 {
		 	temp=card_arr[i]*2;
			sum_odd+=temp%10;
			temp/=10;
			sum_odd+=temp;
		 }
		 else
		 {
		 	sum_odd+=card_arr[i]*2;
		 }
     }
  }
  //printf("sumO :%d sumE :%d\n",sum_odd,sum_even);
  if((sum_odd+sum_even)%10==0)
  {
  	if(card_arr[0]==3 &&(card_arr[1]==4||card_arr[1]==7))
  	{
  		printf("AMEX\n");
  	}
  	else if(card_arr[0]==5&&(card_arr[1]==1||card_arr[1]==2||card_arr[1]==3||card_arr[1]==4||card_arr[1]==5))
  	{
  		printf("MASTERCARD\n");
  	}
  	else if(card_arr[0]==4)
  	{
  		printf("VISA\n");
  	}

  }
  else
  {
  	printf("INVALID\n");
  }
  return(0);
}
