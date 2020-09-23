#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long flg,i, j, k, l, n, m, num, temp,swp;


     while(scanf("%lld", &num) == 1)
     {
         if(num == 0) break;
          vector<long long>ara;

         long long cnt = 0;
          for(i = 0; i < num; i++)
          {
               long long val;
               scanf("%lld", &val);
               ara.push_back(val);
          }

              for(i = 0 ; i < ( num - 1 ); i++)
                  {
                    for(j = 0 ; j < num - i - 1; j++)
                        {
                            if (ara[j] > ara[j+1]) /* For decreasing order use < */
                            {
                                swp       = ara[j];
                                ara[j]   = ara[j+1];
                                ara[j+1] = swp;
                                cnt ++;
                            }
                        }
                    }

          printf("%lld\n", cnt);
     }
     return 0;
}

