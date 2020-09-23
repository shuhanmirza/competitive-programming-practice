#include<bits/stdc++.h>

using namespace std;

int main()
{
     int i, j, k, l, m, n, ara[2020], ara2[2020], num;

     cin >> num;

     for(i = 0; i < num; i++)
     {
          scanf("%d", &ara[i]);
     }
     int cnt = 0;
     for(i = 0; i < num; i++)
     {
          for(j = 0; j < num; j++)
          {
               if(ara[j] > ara[i])
                    cnt++;
          }
          ara2[i] = cnt;
          cnt = 0;
     }

     printf("%d", ara2[0]+1);

     for(i = 1; i < num; i++)
     {
          printf(" %d", ara2[i]+1);
     }
     return 0;
}
