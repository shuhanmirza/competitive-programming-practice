#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n, col[110], i;

     cin >> n;

     for(i = 0; i < n; i++)
     {
          scanf("%d", &col[i]);
     }

     sort(col, col+n);

     printf("%d", col[0]);

     for(i = 1; i < n; i++)
     {
          printf(" %d", col[i]);
     }
     printf("\n");

     return 0;
}

