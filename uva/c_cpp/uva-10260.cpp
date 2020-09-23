#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    string input,ans;
    int i,L_i,j;
    bool flag[7];

    for( i = 0 ; i < 6 ; i++)
    {
        flag[i] = false;
    }

    while( cin >> input)
    {
        L_i = input.size();

        i = 0;

        for( j = 0 ; j < 6 ; j++)
        {
            flag[j] = false;
        }

        while( i < L_i )
        {
            if( (input[i] == 'B' || input[i] == 'F' || input[i] == 'P' || input[i] == 'V') && flag[0] == false )
            {
                putchar('1');

                for( j = 0 ; j < 6 ; j++)
                    {
                        flag[j] = false;
                    }
                    flag[0] = true;
            }

                else if( (input[i] == 'C' || input[i] == 'G' || input[i] == 'J' || input[i] == 'K' || input[i] == 'Q' || input[i] == 'S' || input[i] == 'X' || input[i] == 'Z') && flag[1] == false )
                        {
                            putchar('2');

                            for( j = 0 ; j < 6 ; j++)
                                {
                                    flag[j] = false;
                                }

                                flag[1] = true;
                        }

                    else if( (input[i] == 'D' || input[i] == 'T' ) && flag[2] == false )
                            {
                                putchar('3');

                                for( j = 0 ; j < 6 ; j++)
                                {
                                    flag[j] = false;
                                }
                                    flag[2] = true;
                            }

                            else if( (input[i] == 'L' ) && flag[3] == false )
                            {
                                putchar('4');

                                for( j = 0 ; j < 6 ; j++)
                                {
                                    flag[j] = false;
                                }
                                    flag[3] = true;
                            }

                            else if( (input[i] == 'M' || input[i] == 'N' ) && flag[4] == false )
                            {
                                putchar('5');

                                for( j = 0 ; j < 6 ; j++)
                                    {
                                        flag[j] = false;
                                    }
                                    flag[4] = true;
                            }

                        else if( (input[i] == 'R') && flag[5] == false )
                            {
                                putchar('6');

                                for( j = 0 ; j < 6 ; j++)
                                    {
                                        flag[j] = false;
                                    }
                                    flag[5] = true;
                            }

                        else if( input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U' || input[i] == 'H' || input[i] == 'W' || input[i] == 'Y')
                            {
                                for( j = 0 ; j < 6 ; j++)
                                    {
                                        flag[j] = false;
                                    }
                            }

                            i++;

        }

        putchar('\n') ;
    }
    return 0;
}
/*
1 represents B, F, P, or V
2 represents C, G, J, K, Q, S, X, or Z
3 represents D or T
4 represents L
5 represents M or N
6 represents R
*/
