#include <stdio.h>

int main()
{
    int n,weight[105],i,check,total_weight,total_100,total_200;

    scanf("%d",&n);

    total_weight = 0;
    total_100=0;
    total_200=0;

    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&weight[i]);

        total_weight = total_weight + weight[i];

        if(weight[i] == 100) total_100++;
        if(weight[i] == 200) total_200++;
    }

    if( (total_weight/100) % 2 != 0 || n == 1)
    {
        printf("NO");
    }

      else
      {
        if(total_100 % 2 != 0)
        {
            printf("NO");
        }

        else
        {
           if(total_200 % 2 != 0)
           {
               if(total_100 == 0)
               {
                   printf("NO");
               }

               else
               {
                   printf("YES");
               }
           }

           else
           {
               printf("YES");
           }
        }
      }

    return 0;
}
