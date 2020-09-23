#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    int siz,ans;
    string input;

    cin >> input;

    siz = input.size();

    ans = 26*(siz+1) - siz;

    cout << ans;

    return 0;
}
