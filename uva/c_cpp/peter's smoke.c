#include <stdio.h>

int main()
{
    long long  n,k,i,ans,tmp,tmp_1,mem;

    while( scanf("%lld %lld",&n,&k) == 2 )
    {
        tmp_1=n;
        tmp=n/k;
        ans=n;



        while(tmp != 0)
        {
            ans=ans+tmp;


            mem=(tmp_1%k);
            tmp_1=tmp +(tmp_1%k);

            tmp = ( tmp + mem ) / k;


        }



        printf("%lld\n",ans);
    }

    return 0;
}
