#include<bits/stdc++.h>

using namespace std;

int main()
{
     int i = 0, j, k, l, n, ara[10010], med;

     while(scanf("%d", &n) != EOF)
     {
          ara[i] = n;
          sort(ara, ara+i+1);
          if(i % 2 != 0) //i odd, mane even number
          {
               med = (ara[i/2] + ara[(i/2)+1]) / 2;
          }
          else
           med = ara[i/2];

          i++;

          if(i%2 == 0) cout << med << endl;

     }
     return 0;
}
