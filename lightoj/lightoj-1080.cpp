#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t,cas,n,q,a,b,i,j;
    string st;
    char in;

    scanf("%lld",&t);

    for(cas = 1 ; cas <= t ; cas++)
    {
        scanf("%lld %lld",&n,&q);

        cin >> st;

        printf("Case %lld:\n",cas);

        for(i = 1 ; i <= q ;i++)
        {
            cin >> in >> a;
            if(in == 'I')
            {
                cin >> b;

                for(j = a - 1 ; j < b ; j++)
                {
                    if(st[j] == '0') st[j] = '1';
                    else st[j] = '0';
                }
            }
            else
            {
                cout << st[a-1] << endl;
            }
        }
    }

    return 0;
}
