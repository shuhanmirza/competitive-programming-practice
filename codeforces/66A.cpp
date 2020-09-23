#include <bits/stdc++.h>

using namespace std;

void check_big(string num)
{
    int flag = 0;
    string check = "9223372036854775807";
    for(int i = 0 ; i < 19 ; i++)
    {
        if(num[i] > check[i])
        {
            flag++;
            break;
        }
        if(num[i] < check[i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 0) cout << "long";
    else cout << "BigInteger";
}

void check_num(string input)
{
  long long tmp,num,len,i;

  len = input.size();

  num = 0;tmp = 1;
  for( i = len - 1 ; i >= 0 ; i--, tmp *= 10)
  {
      num += (input[i] - '0') * tmp;
  }

  if( num <= 127) cout << "byte";
  else if( num <= 32767) cout << "short";
  else if( num <= 2147483647) cout << "int";
  else  cout << "long";

}

int main()
{
    string input;
    long long num,len;


    cin >> input;
        len = input.size();

        if(len > 19) cout << "BigInteger";
        else if(len == 19) check_big(input);
        else check_num(input);



    return 0;
}
