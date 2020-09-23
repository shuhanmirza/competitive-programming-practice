#include <bits/stdc++.h>

using namespace std;

int mat[50][50][2],len_a,len_b,mx[2];
string a,b;

void LCS(int x , int y)
{
    if(x >= len_a) x = len_a - 1;
    if(y >= len_b) y = len_b - 1;

    if(a[x] == b[y])
    {
        mat[x+1][y+1][0] = max(mat[x][y+1][0] , mat[x+1][y][0]) + 1;

        mat[x+1][y+1][1] = x*10 + y;
    }
    else
    {
        mat[x+1][y+1][0] = max(mat[x][y+1][0] , mat[x+1][y][0]);
        if(mat[x][y+1][0] >= mat[x+1][y][0]) mat[x+1][y+1][1] = x*10 + y+1;
        else mat[x+1][y+1][1] = (x+1)*10 + y;
    }

    if(mx[0] < mat[x+1][y+1][0])
    {
      mx[0] = mat[x+1][y+1][0];
      mx[1] = (x+1)*10 + y + 1;
    }

    if(x == len_a - 1 && y == len_b - 1 ) return;

    if(x == len_a - 1)
    {
        LCS(0,y+1);
    }
    else LCS(x+1,y);
}

int main()
{
    int i,j,k;
    char ans[1000];
    while(1)
    {
        cin >> a;
        cin >> b;

        len_a = a.size();
        len_b = b.size();

        memset(mat,0,sizeof mat);
        memset(mx,-1,sizeof mx);

        LCS(0,0);

        for( i = mx[1]/10 , j = mx[1]%10 , k = 0 ; i > 0 && j > 0 ;)
        {
           if(mat[i][j][1] == ((i-1)*10) + j - 1)
           {
               ans[k++] = a[i-1];
           }
           i = mat[i][j][1]/10;
           j = mat[i][j][1] %10;
        }
        ans[k] = '\0';

        for(i = 0 , j = k-1 ; i < k/2 ; i++,j--)
        {
            swap(ans[i],ans[j]);
        }

        cout << ans << endl;

    }
    return 0;
}
//puchi
//meow
