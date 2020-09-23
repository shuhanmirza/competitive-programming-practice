#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long num,ara[100050],ans = 0;;
     cin >> num;

     for(long long i = 0; i < num; i++)
     {
          cin >> ara[i];
     }

     sort(ara,ara+num);

     long long sum = 0;
     for(long long i = 0 ; i < num ; i++)
     {
         if(ara[i] >=  sum)
         {
             ans++;
             sum += ara[i];
         }
     }
     cout << ans;

     return 0;
}
