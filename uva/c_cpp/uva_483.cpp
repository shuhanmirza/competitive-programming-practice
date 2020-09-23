#include <cstdio>
#include <cstring>
#include <cctype>
#include <string>
#include <iostream>

using namespace std;

int start,last,len,i,j;
char input[10000];

void word_print(int strt, int lst)
{
    for( int i = lst ; i >= strt ; i--)
    {
        printf("%c",input[i]);
    }

     return;
}

int main()
{


    while(gets(input))
    {


        len = strlen(input);

        start = 0;
        for( i = 0 ; i < len ; i++)
        {
            if( isspace(input[i]) )
            {
                word_print(start,i-1);
                start = i+1;
                cout << " ";
            }

            if( i == (len - 1) )
            {
                word_print(start,i);
                cout << "\n";
            }
        }
    }
    return 0;
}
