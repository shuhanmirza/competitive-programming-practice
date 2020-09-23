#include<stdio.h>

int main()
{
    int n,h[110],i,j,max1,max,dif[110],min,flag,loop,sub[110];

    while(1)
    {
        //input
        scanf("%d",&n);

        for(i=1; i<=n; i++)
        {
            scanf("%d",&h[i]);
        }

                //process
                max1=0;

                loop=n-2;
                for(i=1; i<=(n-1) ;i++)
                {
                    dif[i]=h[i+1]-h[i];
                }


               while(loop--)
               {
                   sub[loop+1]=dif[loop+2]+dif[loop+1];

                   for(i=1;i<=n-2;i++)
                   {
                       if(i==loop+1) continue;

                       else if(i>loop+1)
                             {
                                   sub[i]=dif[i+1];
                                     continue;
                             }

                       else sub[i]=dif[i];
                   }

                         max=0;
                        for(i=1;i<=n-2;i++)
                        {
                           if(max<sub[i]) max=sub[i];
                        }

                            if(loop==n-3) min=max;
                            else
                                {
                                   if(min>max) min=max;
                                }
               }



                printf("%d\n",min);


    }

    return 0;
}
