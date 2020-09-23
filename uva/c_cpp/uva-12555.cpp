#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,cas;
    double ans,a,b;
    string st;

    cin >> T;

    cas = 1;
    while(T--)
    {
        cin >> a >> st;

        b = 0;
        if(st.size() > 3) b = st[3] - '0';

            ans = (0.5*a) + (b*0.05);
            printf("Case %d: ",cas);
            cout << ans << endl;

        cas++;
    }
    return 0;
}

