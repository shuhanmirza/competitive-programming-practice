#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,y4,y15,y100,y55,y400,count = 0,l;
   char year[100001];

   while(scanf("%s",&year)==1)
   {
       y4=0;
       y100=0;
       y15=0;
       y55=0;
       y400 = 0;

        if (count>0)   printf("\n");

        count++;

        l=strlen(year);

       for( i = 0 ; i < l ; i++)
       {
            y4  = ((y4*10) + (year[i] - '0')) % 4 ;
            y100 = ((y100*10) + (year[i] - '0')) % 100;
            y15 = ((y15*10) + (year[i] - '0')) % 15;
            y55 = ((y55*10) + (year[i] - '0')) % 55;
            y400 = ((y400*10) + (year[i] - '0')) % 400;
       }

       //printf("%lld %lld %lld %lld %lld",y4,y100,y400,y15,y55);

       if( ( !y4 && y100 ) || ( !y400) )
       {
            printf("This is leap year.\n");
            if( !y15)
            {
                 printf("This is huluculu festival year.\n");
            }

            if(!y55)
            {
                printf("This is bulukulu festival year.\n");
            }
       }

       else
       {
           if(!y15)
            {
                printf("This is huluculu festival year.\n");
            }
            else  printf("This is an ordinary year.\n");

       }

      // printf("\n");
   }

    return 0;
}
   /* while(scanf("%lld",&a) == 1 )
    {
        if( ( ( a % 4 == 0 ) && ( a % 100 != 0)  )  || (( ( a % 400 == 0) ) ) )
        {

                printf("This is leap year.\n");
                if(a%15==0)
                {
                    printf("This is huluculu festival year.\n");
                }
                    if(a%55==0)
                    {
                        printf("This is buluculu festival year.\n");
                    }
        }

        else
        {
            if(a%15==0)
            {
                printf("This is huluculu festival year.\n");
            }
            else { printf("This is an ordinary year.\n");}

        }
        printf("\n");
    }
    return 0;
}
*/
