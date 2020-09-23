#include <bits/stdc++.h>

using namespace std;


unsigned long long bigmod(unsigned long long a,unsigned long long p , unsigned long long m)
{
   if( p == 1) return a%m;
   if( p == 0) return 1;

   else if( p & 1)
   {
       return ( a%m * bigmod(a,p-1,m)) % m;
   }
   else
   {
      unsigned long long c = bigmod(a,p/2,m);
      return (c*c) % m;
   }
}

int main()
{
    unsigned long long n,t,a,p,m;

    while(scanf("%llu",&a) == 1)
    {
        scanf("%llu",&p);
        scanf("%llu",&m);

        printf("%llu\n",bigmod(a,p,m));
    }
    return 0;
}

