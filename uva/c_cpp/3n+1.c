#include<stdio.h>

int main()
{
    int i,j,cycle,a,b,c,max;
    long long n;

    while(scanf("%d %d",&a,&b)==2)
    {
        max=0;

        if (a>b)
        {
            c=a;
            a=b;
            b=c;
        }

        for(i=a;i<=b;i++)
        {
               n=i;
               cycle=1;

            for(j=1;j>0;j++)
            {
                if( n == 1)
                {
                    if (a==1 && b==1) max++;
                    break;
                }
                    else
                    {
                        if(n%2==0)
                        {
                            n=n/2;
                            cycle++;
                        }
                        else
                            {
                                n=(3*n)+1;
                                cycle++;
                            }
                    }

                    if(cycle>max) max=cycle;
            }
        }

        if (c==b) printf("%d %d %d\n",b,a,max);
        else printf("%d %d %d\n",a,b,max);

    }


return 0;
}

