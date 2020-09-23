#include<stdio.h>
#include<math.h>

int main()
{
    int i,t,flag;
    int x,y,chk;
    float a,b,s,lp;


    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%f",&s);
        flag=0;

        lp=1.0;
        while(lp<=s)         //checking the square identity
        {
            if (lp==s)
            {
                flag=1;
                break;

            }
            lp=(lp+1.0)*(lp+1.0);
        }


        if(flag==1)
        {
            chk=(int)lp;
            if(chk%2==0)
            {
                a=sqrt(lp);
                b=1;
            }

            else
            {
                a=sqrt(lp);
                b=1;
            }
        }

        else
        {
            lp=sqrt(lp);
        }


              x=(int)a;
              y=(int)b;
        printf("Case %d: %d %d\n",i,x,y);
    }

    return 0;
}
