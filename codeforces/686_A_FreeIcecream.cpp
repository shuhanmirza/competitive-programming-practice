#include <bits/stdc++.h>

using namespace std;

int main()
{
   unsigned long long n , x, in,dis;
   char c;

   cin >> n >> x;

   dis = 0;
   for(long long i = 0 ; i < n ; i++)
   {
       cin >> c >> in;

       if(c == '+')
       {
           x += in;
       }
       else
       {
           if(in > x) dis++;
           else x -= in;
       }
   }

   cout << x << " " << dis;

   return 0;
}
