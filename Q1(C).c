#include<stdio.h>
int main()
{int sum=0,k=0,n;
  printf("give n =");
  scanf("%d", &n);
 if(n<1)
  printf("Cannot add \n");
 else 
  {while(k<=n)
  {sum=sum+k;
   ++k;
  }
 printf("the sum of values is %d \n", sum);}
return 0;
}
