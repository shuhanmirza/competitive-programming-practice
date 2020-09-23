#include<stdio.h>

int main()
{
    int n,m,a,number,i,j,count1,count2;

   while(scanf("%d %d %d",&n,&m,&a)==3)
   {
       count1=0;
       count2=0;

       if(n%a!=0)count1=1;
        if(m%a!=0)count2=1;


       i=(n/a)+count1;
       j=(m/a)+count2;

       number=i*j;

    printf("%d\n",number);
   }

    return 0;
}
