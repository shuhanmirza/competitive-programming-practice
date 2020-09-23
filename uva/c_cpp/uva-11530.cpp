#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    long long flag[30],ans,i,cas,T,len;
    string input;

    cin >> T;

    flag[0] = 1;
    flag[1] = 2;
    flag[2] = 3;
    flag[3] = 1;
    flag[4] = 2;
    flag[5] = 3;
    flag[6] = 1;
    flag[7] = 2;
    flag[8] = 3;
    flag[9] = 1;
    flag[10] = 2;
    flag[11] = 3;
    flag[12] = 1;
    flag[13] = 2;
    flag[14] = 3;
    flag[15] = 1;
    flag[16] = 2;
    flag[17] = 3;
    flag[18] = 4;
    flag[19] = 1;
    flag[20] = 2;
    flag[21] = 3;
    flag[22] = 1;
    flag[23] = 2;
    flag[24] = 3;
    flag[25] = 4;

    getchar();

    for(cas= 1 ; cas <= T ; cas++)
    {
        getline(cin,input);

        ans = 0;

        len = input.size();

        for( i = 0 ; i < len ; i++)
        {
            if( input[i] >= 'a' && input[i] <= 'z')
            {
                ans += flag[ input[i] - 'a'];
            }
            else
                ans++;

                //cout << ans << "\n";
        }

        printf("Case #%lld: %lld\n",cas,ans);

    }

    return 0;
}
