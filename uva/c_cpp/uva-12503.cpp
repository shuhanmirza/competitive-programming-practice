#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ans,T,n,ins[1000],i,temp;
    char st[30];

    cin >> T;

    while(T--)
    {
        cin >> n;

        ans = 0;
        for(i = 1 ; i <= n ;i++)
        {
            scanf("%s",st);

            if(st[0] == 'L')
            {
                ans--;
                ins[i] = -1;
            }
            if(st[0] == 'R')
            {
                ans++;
                ins[i] = 1;
            }
            if(st[0] == 'S')
            {
                scanf("%s",st);
                scanf("%d",&temp);
                ans += ins[temp];
                ins[i] = ins[temp];
            }

        }

        cout << ans << endl;
    }
    return 0;
}

