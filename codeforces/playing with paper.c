#include <stdio.h>

long long count,c;

void process (long long a, long long b)
{
    if( b==1 )
    {
        count=count + a;

        return;
    }

   else if(a==b)
   {
       return;
   }

    else
    {
        count = count + a/b;

        c=b;
        b=a%b;
        a=c;
        process(a,b);

        return;
    }


}

int main()
{
    long long a,b,i,ans;

      scanf("%I64d %I64d",&a,&b);



    if( a%b == 0)
    {
        count = a/b;
    }

    else if( b%a == 0)
    {
        count = b/a;
    }


    else
    {

        count=0;

        if(a<b)
        {
            c=a;
            a=b;
            b=c;
        }

        process(a,b);

    }

    printf("%I64d",count);

    return 0;
}
