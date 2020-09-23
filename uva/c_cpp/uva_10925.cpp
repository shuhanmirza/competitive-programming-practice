#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

string add(string a , string b)
{
   int i,La,Lb,c;
   string ret;
   La = a.size() ;
   Lb = b.size();

   for( i = 0 , c = 0 ; i < La || i < Lb || c > 0 ; c /=10,i++ )
   {
       if( i < La) c += a[i] - '0';
       if( i < Lb) c += b[i] - '0';

       ret += (char)( c%10 + '0');
   }

   return ret;
}

string bignum_div(string a , int n)
{
    string ret;
    int La,i,temp;

    La = a.size();
     temp = 0;
     ret = "0";
    for( i = 0 ; i < La ; i++)
    {
        temp = temp*10 + a[i] - '0';
        ret += (char) ( temp/n +'0');

        temp %= n;
    }

    while(ret[0] == '0' && ret.size()>1)
    {
        La = ret.size();
        for( i = 0 ; i < La - 1 ; i++)
        {
            ret[i] = ret[i+1];
        }
        ret.erase(La-1,1);
    }

    return ret;
}

int main()
{
    int  bill,N,F,i;
    string input,sum,div;

    bill = 1;
    while(scanf("%d %d",&N,&F) == 2)
    {
        if( N == 0) break;
        sum = "0";
        for(int i = 0;i < N; i++)
        {
            cin >> input;
            reverse(input.begin(),input.end());

            sum = add(sum,input);
        }

        reverse(sum.begin(),sum.end());
        div = bignum_div(sum,F);

//        Bill #1 costs 16200000000: each friend should pay 5400000000
   cout << "Bill #" << bill++ << " costs " << sum << ": each friend should pay " << div << "\n\n";
    }
    return 0;
}
