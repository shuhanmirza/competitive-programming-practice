#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,testcase,cas,len_i,len_b,temp,ans;
    bool flg;
    char input[1000010],buffer[1000010];

    scanf("%d",&testcase);

    for( cas = 1 ; cas <= testcase ; cas++)
    {
        scanf("%s",input);
        scanf("%s",buffer);

        len_b = strlen(buffer);
        len_i = strlen(input);

        flg = false;
        ans = 0;

        for( i = 0 ; i + len_b - 1 < len_i; i++ )
        {
            if( buffer[0] == input[i] )
            {
                flg = true;

                for( k = 0 , j = i  ; k < len_b ; k++,j++)
                {
                    if( buffer[k] != input[j] )
                    {
                        flg = false;
                        i = j;
                        break;
                    }
                }
            }

            if ( flg == true )
            {
                ans++;
            }
            flg = false;
        }


        printf("Case %d: %d\n",cas,ans);


    }
    return 0;
}
