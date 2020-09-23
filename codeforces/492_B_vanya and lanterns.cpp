#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n, l, ara[1005], i, maxx = 0;
     double rad;

     cin >> n >> l;

     for(i = 0; i < n; i++)
     {
          scanf("%d", &ara[i]);
     }

     sort(ara, ara+n);

     for(i = 0; i < n; i++)
     {
          int val = ara[i] - ara[i-1];
          if(val > maxx)
               maxx = val;
     }


     rad = (double)maxx/2;

     double d0,dn;

     if(ara[0] != 0 )
     {
          d0 = (double)ara[0];
          if(rad < d0)
               rad = d0;
     }

     if(ara[n-1] != l )
     {
          dn = (double)(l - ara[n-1]);
          if(rad < dn)
               rad = dn;
     }

     printf("%lf", rad);

     return 0;
}
