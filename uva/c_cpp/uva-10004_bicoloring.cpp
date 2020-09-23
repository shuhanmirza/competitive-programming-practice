#include <bits/stdc++.h>

using namespace std;

int mat[300][300],n,l;
char col[300];
bool flg;

void bfs(int start)
{
    queue <int> q;
    q.push(start);
    flg = true;
    col[0] = 'g';

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        char c = col[u];

        for(int i = 0 ; i < n ; i++ )
        {
            if(mat[u][i] == 1 )
            {
                if(col[i] == 'w') q.push(i);

                if(col[u] == col[i])
                {
                    flg = false ;
                    return;
                }

                if(c == 'g') col[i] ='r';
                else col[i] = 'g';
            }
        }
    }

    return;
}

int main()
{
    int i,j,a,b;

    while(scanf("%d",&n) == 1)
    {
        if(n == 0) break;

        memset(mat,0,sizeof mat);
        memset(col,'w',sizeof col);

        scanf("%d",&l);

        for(i = 0 ; i < l ; i++)
        {
            scanf("%d %d",&a,&b);
            mat[a][b] = 1;
            mat[b][a] = 1;
        }

        bfs(0);

     //   for(i = 0 ; i < n ; i++) cout<<col[i] << " ";
       // cout << endl;

        if(flg == true) printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");
    }
    return 0;
}

