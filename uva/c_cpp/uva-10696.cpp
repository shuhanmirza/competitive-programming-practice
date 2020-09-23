#include <cstdio>
#include <iostream>

using namespace std;

long long f91(long long X)
{
    if( X >= 101)
    {
        X = X - 10;

        return X;
    }

    if( X <= 100 )
    {
        X = f91( f91(X+11) );

        return X;
    }
}

int main()
{
    long long X,ans;

    while(scanf("%lld", & X) == 1)
    {
        if( X == 0 ) break;

        ans = f91(X);

        cout<<"f91("<<X<<") = "<<ans<<"\n";
    }
    return 0;
}
