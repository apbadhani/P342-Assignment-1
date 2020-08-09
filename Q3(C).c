#include<stdio.h>
int main()
{int k,n;float f,sum=0,sub;
 printf("Enter n \n");
 scanf("%d",&n);
 for(k=1;k<=n;k++)
 {sub=sum;
  f=k;
  sum=sum+1/f ;
  sub=sum-sub;
   if(sub<=0.001){
    printf("Sum does not change by more than 0.001 \n");
   goto end;}
 }
 end: ;
 printf("Sum = %f \n",sum);
return 0;
}
