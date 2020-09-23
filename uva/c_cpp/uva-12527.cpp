#include<cstdio>
#include<cstring>
#include <string>
#include <iostream>
#include<cctype>
#include <cstdlib>

using namespace std;

bool flag_num[20],check;

void init_flag()
{
    int i;

    for( i = 0 ; i < 10 ; i++)
    {
        flag_num[i] = false;
    }
}

int main()
{
    int N,M,cnt,i,j;


    while( cin >> N >> M)
    {
        init_flag();
        cnt = 0;
        for( i = N ; i<= M ; i++)
        {
            j = i;
            init_flag();
            check = true;

             while( j > 0)
            {
               if( flag_num[j%10] == false)
               {
                   flag_num[j%10] = true;
               }
                    else
                    {
                        check = false;
                        break;
                    }

                j /= 10;
            }

            if( check == true) cnt++;
        }

        cout << cnt << "\n";
    }
    return 0;
}
