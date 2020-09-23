#include <cstdio>
#include <string>
#include <cstring>
#include <cctype>
#include <iostream>

using namespace std;

string date[2];
long long month[2],day[2],year[2];

long long count_leap(long long y1,long long y2)
{
    long long i,count;

    count = 0;
    for(i = y1 ; i <= y2 ; i++ )
    {
        if( ( i % 4 == 0 && i % 100 != 0) || ( i % 400 == 0))
        {
            count ++ ;
        }
    }

    return count;
}

long long get_date(int i)
{
  int j;

    if( date[i][0] == 'J') month[i] = 1;

       else if( date[i][0] == 'F') month[i] = 2;

           else if( date[i][0] == 'M' && date[i][2] == 'r') month[i] = 3;

               else if( date[i][0] == 'A' && date[i][1] == 'p') month[i] = 4;

                  else if( date[i][0] == 'M' && date[i][2] == 'y') month[i] = 5;

                       else if( date[i][0] == 'J' && date[i][2] == 'n') month[i] = 6;

                           else if( date[i][0] == 'J' && date[i][2] == 'l' ) month[i] = 7;

                               else if( date[i][0] == 'A' && date[i][1] == 'u' ) month[i] = 8;

                                   else if( date[i][0] == 'S') month[i] = 9;

                                       else if( date[i][0] == 'O') month[i] = 10;

                                            else if( date[i][0] == 'N') month[i] = 11;

                                                else if( date[i][0] == 'D') month[i] = 12;


    j = 2;
    while(date[i][j] != ' ')
    {
        j++;
    }

    if(date[i][j+2] != ' ' )day[i] = (date[i][j+1] - '0')*10 + (date[i][j+2] - '0');
    else day[i] = (date[i][j+1] - '0');

    j++
    while(date[i][j] != ' ')
    {
        j++;
    }




}

int main()
{

    long long T,cas;

    cin >> T;
    getchar();
    for(cas = 1 ; cas <= T ; cas++)
    {
        cin << date[0] << day[0];
        getchar();

    }

    return 0;
}
