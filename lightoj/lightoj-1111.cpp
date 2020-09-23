#include <bits/stdc++.h>

using namespace std;

char c[1005];
int v,e,tim,mat[1005][1005],d[1005],p[1005],start,END,vis[1005],per[105],k;

void init()
{
    int i,j;

    tim = 0;
    for(i = 1 ; i <= v ; i++)
    {
        c[i] = 'w';
        d[i] = 1234412;
        p[i] = 0;
    }
}
void path_print(int e)
{
    if(start == e)
    {
        printf("%d\n",e);
    }
    else
    {
        path_print(p[e]);
        printf("%d\n",e);
    }
}

void dfs(int st)
{
     c[st] = 'g';
     d[st] = tim++;
     vis[st]++;

     for(int i = 1 ; i <= v ; i++)
     {
         if(mat[st][i] == 1)
         {
             if(c[i] == 'w')
             {
                 p[i] = st;
                 dfs(i);
             }
         }
     }
     c[st] = 'b';
}


int main()
{
    int t,i,b,ans,a;

    cin >> t;

    for(int cas = 1 ; cas <= t ; cas++ )
    {
        memset(mat,0,sizeof mat);
        memset(vis,0,sizeof vis);

        cin >> k >> v >> e;

        for(i = 1 ; i <= k ; i++) cin >> per[i];

        for(i = 1 ; i <= e ; i++)
        {
            cin >> a >> b;
            mat[a][b] = 1;
        }

        for( i = 1 ; i <= k ; i++)
        {
            init();
            dfs(per[i]);
        }

        ans = 0;
        for( i = 1 ; i <= v ; i++)
        {
            if(vis[i] == k) ans++;
        }

        cout << "Case "<<cas <<": "<<ans<<endl;
    }
   return 0;
}
