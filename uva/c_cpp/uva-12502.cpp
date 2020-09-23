#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,z,ans,t;

    cin >> t;

    while(t--)
    {
        cin >> x >> y >> z;

        ans = z * (x + (x-y)) / (x+y) ;

        if(ans < 0) cout << "0\n";
        else cout <<ans <<endl;
    }

    return 0;
}
