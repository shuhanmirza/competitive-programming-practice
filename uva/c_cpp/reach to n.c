#include <stdio.h>
int main()
{
   int a,b,count,d,i,j,k,sum,n;



   while(n=1)
   {
      sum=0;
      count=0;
      scanf("%d",&a);
       for(i=1;i<=a;i++)
       {
           for(j=i;j>=1;j++)
           {
               sum=sum+j;

               if(sum==a)
               {
                   count=count+1;
               }


                    if(sum>a)
                    {
                        break;
                    }

           }
           sum=0;

       }
       printf("%d\n",count);

   }
}
