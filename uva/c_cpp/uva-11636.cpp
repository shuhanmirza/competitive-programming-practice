#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int cas,ans,input;
    double temp,ans_1;

    cas = 1;

    while(scanf("%d",&input) == 1)
    {
        if( input <= 0) break;

        ans_1 = log10(input) / log10(2.0);
            ans = (int)ans_1;

         if( ( ans_1 - (double)ans ) > 0.00001 ) ans++;

           printf("Case %d: %d\n",cas,ans);
            cas++;
    }
    return 0;
}
