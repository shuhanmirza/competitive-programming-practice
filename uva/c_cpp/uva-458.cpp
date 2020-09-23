#include <bits/stdc++.h>

using namespace std;
int main()
{
   char str[255];
   char c;
   while(cin>>str)
    {
       for(int i=0 ; i < strlen(str) ; i++)
       {
          c = str[i]-7;
            cout<<c;
       }
       cout<<endl;
    }
   return 0;
}
