#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    int i,siz,n,j,k,l,clean,same,same_temp,flag,check[101];
    char room[101][101];

    cin >> n;

    clean = 0;
    same = 1;
    same_temp = 1;

    for( i = 0 ; i < n ; i++)
    {
        for( j = 0 ; j < n ; j++)
        {
            cin >> room[i][j] ;
        }

        flag = 0;
        for ( j = 0 ; j < n ; j++)
        {
            if( room[i][j] == '0')
            {
                flag = 1;
                break ;
            }
        }

        if ( flag == 0) clean++;
    }


   for( i = 0 ; i < n ; i++)
   {
       check[i] = 1;
   }



    for( i = 0 ; i < n ; i++)
    {
        same_temp = 1;

        if( check[i] == 1)
        {
            check[i] = 0;

            for( j = i+1 ; j < n ; j++)
            {
                if( check[j] == 0) continue;

                  flag = 0;
                        for ( k = 0 ; k < n ; k++)
                            {
                                if( room[i][k] == room[j][k])
                                {
                                    flag = 0;
                                }

                                    else
                                    {
                                        flag = 1;
                                        break;
                                    }
                            }

                if( flag == 0)
                {
                    same_temp++;
                    check[j] = 0;
                }
            }

            if ( same < same_temp ) same = same_temp;
        }
    }

    if( clean > same ) cout << clean;
        else cout << same;



    return 0;
}
