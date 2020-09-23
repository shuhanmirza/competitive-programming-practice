#include <stdio.h>

int main()
{
    long long n,m,ans,c;

    scanf("%I64d %I64d",&n,&m);

    ans=0;

    while(n!=m)
    {
        if( n > m)
        {
            c=n-m;
            n=n-c;
            ans=ans+c;
        }

            else if( (n < m) && ( (2*n) > m ) )
                {
                    c = (n-(m/2));
                    n=n-c;
                    ans=ans+c;
                }

                    else if( (n < m) && ( (2*n) <= m )  )
                    {

                      while( n < m )
                      {
                          n=2*n;
                          ans++;
                      }

                    }


    }

    printf("%I64d",ans);

    return 0;
}
