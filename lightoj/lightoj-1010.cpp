#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int T,cas,m,n,i,j,k,ans,chess[4100];

    cin >> T;

    for(cas = 1; cas <= T ; cas++)
    {
       cin >> m >> n;

       ans = m*n;

       memset(chess,1,m*n);

       for( i = 0 ; i < m ; i++)
       {
           for(j = 0 ; j < n ; j++)
           {
               if(chess[i*j] == 0) continue;

               if( (i+1) < m && (j+2) < n  )
               {
                   if(chess[(i+1) * (j+2)] == 1)
                   {
                       chess[(i+1) * (j+2)] = 0;
                       ans--;
                   }
               }
               if( (i-1) >= 0 &&(j+2) < n )
               {
                   if(chess[(i-1) * (j+2)] == 1)
                   {
                       chess[(i-1) * (j+2)] = 0;
                       ans--;
                   }
               }

               if( (i+1) < m && (j-2) >= 0 )
               {
                   if(chess[(i+1) * (j-2)] == 1)
                   {
                       chess[(i+1) * (j-2)] = 0;
                       ans--;
                   }
               }
               if( (i-1) >= 0 &&(j-2) >= 0 )
               {
                   if(chess[(i-1) * (j-2)] == 1)
                   {
                       chess[(i+1) * (j+2)] = 0;
                       ans--;
                   }
               }

               if((i+2) < m && (j+1) < n )
               {
                   if(chess[(i+2) * (j+1)] == 1)
                   {
                       chess[(i+2) * (j+1)] = 0;
                       ans--;
                   }
               }
               if((i+2) < m && (j-1) >= 0 )
               {
                   if(chess[(i+2) * (j-1)] == 1)
                   {
                       chess[(i+2) * (j-1)] = 0;
                       ans--;
                   }
               }

               if((i+2) < m && (j+1) < n )
               {
                   if(chess[(i+2) * (j+1)] == 1)
                   {
                       chess[(i+2) * (j+1)] = 0;
                       ans--;
                   }
               }
               if((i+2) < m && (j-1) >= 0 )
               {
                   if(chess[(i+2) * (j-1)] == 1)
                   {
                       chess[(i+2) * (j-1)] = 0;
                       ans--;
                   }
               }

           }
         }

         cout << ans <<"\n";
}


    return 0;
}
