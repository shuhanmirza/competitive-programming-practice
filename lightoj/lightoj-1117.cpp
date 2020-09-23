#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int cnt,T,cas,N,M,i,p[20],j;
    bool flag;
    cin >> T;

    for( cas = 1 ;cas <= T ; cas++)
    {
        cin >> N >> M;

        cnt = 1;
        for( i = 0 ; i < M ; i++)
        {
            cin >> p[i];
        }

        for( i = 2 ; i <= N ; i++)
        {
            flag = true;
            for( j = 0 ; j < M ; j++)
            {
                if( i % p[j] == 0)
                {
                    flag = false;
                    break;
                }
            }

            if( flag == true) cnt++;
        }


       cout <<"Case "<<cas<<": "<<cnt<<"\n";
    }

    return 0;

}
