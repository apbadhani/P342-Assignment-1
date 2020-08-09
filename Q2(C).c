#include<stdio.h>
int main()
{int n; float fac=1;
 printf("give the value for factorial: ");
 scanf("%d",&n);
  if(n<0)
   printf("Error!! \n");
  else
   {while(n>1)
   {fac=fac*n;
    --n;
   }
   printf("the factorial is %f \n",fac);
  }
return 0;
}
