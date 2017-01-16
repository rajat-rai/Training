#include<stdio.h>

int main(void)
{
  int height;
  printf("Height:");
  scanf("%d",&height);
  for(int i=0;i<height;i++)
  {
    for(int s=0;s<(height+1)-(i+2);s++)
    {
      printf(" ");
    }
    for(int h=0;h<i+2;h++)
    {
      printf("#");
    }
    printf("\n");
  }
}
