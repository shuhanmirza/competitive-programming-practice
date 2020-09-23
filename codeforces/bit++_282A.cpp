#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x,t;
    string bit;

    cin >> t;

    x = 0;
    while(t--)
    {
        cin >> bit;
        if(bit[1] == '-') x--;
        else x++;
    }

    cout << x;
    return 0;
}
