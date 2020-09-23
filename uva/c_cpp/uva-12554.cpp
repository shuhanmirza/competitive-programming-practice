#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    string temp;
    vector <string> name;

    cin >> n;

    for(i = 0 ; i < n ; i++ )
    {
      cin >> temp;
      name.push_back(temp);
    }

    int p = 0;
    for( i = 0; i <= n/16 ; i++)
    {
        for(int j = 0 ; j < 16 ;j++)
        {
            cout << name[p++] <<": ";

            if(j == 0 || j == 4 || j == 8 || j == 12 ) cout << "Happy";
            if(j == 1 || j == 5 || j == 9  || j == 13 ) cout << "birthday";
            if(j == 2 || j == 6 || j == 10  || j == 14 ) cout << "to";
            if(j == 3 || j == 7 || j == 15 ) cout << "you";
            if( j == 11 ) cout << "Rujia";

            cout << endl;
            if(p == name.size()) p = 0;
        }
    }

    return 0;
}
