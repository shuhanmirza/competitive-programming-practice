#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,cas,T,ans;
    double area;

    cin >> T;

    for(cas = 1 ; cas <= T ; cas++)
    {
        cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;

        Dx = Cx + (Ax - Bx);
        Dy = Cy + (Ay - By);

        ans = ((Cx-Ax)*(Ay-By)) - ((Cy-Ay)*(Ax-Bx));
        ans = abs(ans);

        printf("Case %d: %d %d %d\n",cas,Dx,Dy,ans);
    }

    return 0;
}
