#include<stdio.h>

void prime(int x)
{
    int i,count=0;
  for(i=2;i<x;i++)
  {
      if(x%i==0)
      {
          count++;
          break;
         
  }    }
   if(count==0)
  {
      printf("%d is prime",x);
  }
  else
  {
      printf("%d in not prime",x);
  }
  
}
void check(int x)
{
    if(x>0)
   prime(x);
    else
   printf("no");
}


  
 

int main()
{
    int x;
    scanf("%d",&x);
    check(x);
}
