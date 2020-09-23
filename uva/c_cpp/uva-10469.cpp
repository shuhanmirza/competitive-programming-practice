#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    uint32_t a,b,ans;

    while(scanf("%u %u",&a,&b) == 2)
    {
        ans = a ^ b;

        cout<<ans;
        cout<<"\n";
    }
    return 0;
}
