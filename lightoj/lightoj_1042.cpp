#include <cstdio>
#include <cctype>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

char s[10000],ch;

long long count_oronoy(long long n)
{
    long long  i , d ,r , len ,j , oronoy;

        i=0;
        oronoy = 0;
        //s[i]='/0';
        d = n;

        while( d != 0 )
        {
            r = d%2;
            d = d/2;

            if(r == 1)
            {
                s[i] = '1';

                   // s[i+1]='\0';

                i++;
                oronoy ++;
            }

                else
                {
                     s[i]='0';

                    // s[i+1]='\0';

                        i++;
                }

        }

        s[i] = '\0';

        /*len = strlen(s);
        for( i = 0 , j = len - 1; i < len/2 ; i++,j--)
        {
            ch = s[i];
            s[i] = s[j];
            s[j] = ch;
        }*/

    return oronoy;
}
int main()
{
    long long dif,cas,T,N,i,j,k,oronoy,ans;


    cin >> T;

    for (cas = 1 ; cas <= T ; cas++)
    {
        cin >> N;

        oronoy = count_oronoy(N);

        for( i = 1 ; i <=  N ; i *= 2 )
        {
            if( (N & i) != 0 )
            {
                ans = N + i;
                break;
            }
        }

        dif = count_oronoy(N) - count_oronoy(ans);

        for( i = 0 ; i < dif ; i++   )
        {
            ans += ( 1 << i);
        }

        printf("Case %lld: %lld\n",cas,ans);
    }


            return 0;
}
