#include <bits/stdc++.h>

using namespace std;

#define LL long long

int main()
{
    int T,i,j,k,n,max_area,area,p,input[30050];
    stack <int> st;

    scanf("%d",&T);
    for(int cas = 1 ; cas <= T ; cas++)
    {
        scanf("%d",&n);

        max_area = 0;

        for( i = 0 ; i < n ; i++) scanf("%d",&input[i]);

        for(i = 0 ; i < n ;i++)
        {
            if(st.empty())
            {
                st.push(i);
            }
            else
            {
                while( input[st.top()] > input[i])
                {
                    p = st.top();
                    st.pop();
                    if(st.empty())
                    {
                        area = input[p] * (i);
                    }
                    else
                    {
                        area = input[p] * (i - st.top() - 1);
                    }

                    if(area > max_area ) max_area = area;
                    if(st.empty())break;
                }
                st.push(i);
            }
        }

        while(!st.empty())
        {
            p = st.top();
            st.pop();

            if(st.empty()) area = input[p] * n;
            else
            {
                area = input[p] * (n - st.top() - 1);
            }

            if(area > max_area ) max_area = area;
        }

        printf("Case %d: %d\n",cas,max_area);
    }
    return 0;
}

