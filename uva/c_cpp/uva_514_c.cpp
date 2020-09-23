#include <bits/stdc++.h>

using namespace std;

int N,tr[1100],i,flg,n;

void marshal()
{
    lvl:
    for(i = 1 ; i <= N ; i++)
    {
        cin >> tr[i];
        if(tr[i] == 0) return;
    }

    stack <int> st;

    i = 1;
    n = 1;
    flg = 1;
    while( i <= N)
    {
        while(st.size() == 0 || st.top() != tr[i])
        {
            st.push(n);
            n++;
            if( n > N) break;
        }
            if(st.top() != tr[i])
            {

            }

                st.pop();
                i++;
    }

    if(st.empty()) printf("Yes\n");
    else printf("No\n");

    goto lvl;
}

int main()
{


    while(cin >> N )
    {
        if(N == 0) break;
        marshal();
        printf("\n");
    }

    return 0 ;
}

