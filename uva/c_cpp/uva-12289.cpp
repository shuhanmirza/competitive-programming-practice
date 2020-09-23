#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string input;
    int len,i,cas,T;

    cin >> T;

    while(T--)
    {
        cin >> input;

        len = input.size();

        if( len > 3 ) cout << "3\n";
        else if( (input[0] == 't' && input[1] == 'w') || (input[0] == 't' && input[2] == 'o') || (input[2] == 'o' && input[1] == 'w')  )
        {
            cout << "2\n";
        }
        else
            cout << "1\n";
    }
    return 0;
}
