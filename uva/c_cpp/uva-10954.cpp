#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    long long input[5002],i,j,k,n,swp,cost,temp;

    while( scanf("%lld",&n) == 1)
    {
        if ( n == 0) break;

        for( i = 0 ; i <n ; i++)
        {
            scanf("%lld",&input[i]);

            for( j = 0 ; j < i ; j++ )
            {
                if( input[i] < input[j] )
                {
                    swp = input[i];
                    input[i] = input[j];
                    input[j] = swp;
                }
            }
        }

            temp = input[0] + input[1];
            cost = temp;

        for( i = 2 ; i < n ; i++)
        {
            temp += input[i];
            cost += temp;
        }

        cout<<cost<<"\n";
    }
    return 0;
}
