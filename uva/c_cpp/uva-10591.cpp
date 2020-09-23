#include<cstdio>
#include<cstring>
#include <string>
#include <iostream>
#include<cctype>
#include <cstdlib>

using namespace std;

long long count_happy(long long n)
{
    char ch[50];
    long long sum,i,len,j;

    if( n < 10) n = n*n;

    sum = n;
    while( sum > 9 )
    {
        j = sum;
        i = 0;
        while( j > 0)
        {
            ch[i] = j%10 + '0';

            j /= 10;
            i++;
        }
        ch[i] = '\0';

        len = strlen(ch);

        sum = 0;
        for( i = 0 ; i < len ; i++ )
        {
            sum += (ch[i] - '0') * (ch[i] - '0') ;
        }
    }

    return sum;
}

int main()
{
    long long i,n,T;

    cin >> T;
    for( i = 1; i <= T ; i++)
    {
        cin >> n;

        if( count_happy(n) ==  1)
        {
            printf("Case #%lld: %lld is a Happy number.\n",i,n);
        }
            else
            {
                printf("Case #%lld: %lld is an Unhappy number.\n",i,n);
            }
    }

         return 0;
}
/*
Case #p: N is a Happy number.
Case #p: N is an Unhappy number.

*/


