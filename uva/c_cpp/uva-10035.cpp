#include <cstdio>
#include <cstring>
#include <string>
#include <cctype>
#include <iostream>

using namespace std;

int main()
{
  long long c,cnt,temp,i,num1,num2,len_n1,len_n2;
   char sum[200],n1[100],n2[100];

    while( scanf("%lld %lld",&num1,&num2) == 2)
    {
        if( num1 == 0 && num2 == 0) break;

        cnt = 0;
        c=0;
        i = 0;

        //if(num1 < num2 ) swap(num1,num2);

        while(num1 > 0 || num2 > 0)
        {
           if( num1 > 0)
           {
                n1[i] = (char)((num1 % 10) + '0');
                num1 /= 10;
                n1[i+1] = '\0';
           }
           if( num2 > 0)
           {
                n2[i] = (char)((num2 % 10) + '0');
                num2 /= 10;
                n2[i+1] = '\0';
           }

           i++;
        }

           //cout << n1 << n2 <<"\n";

        len_n1 = strlen(n1);
        len_n2 = strlen(n2);

        for( i = 0 ; i < len_n1 || i < len_n2  || c > 0 ; c/= 10, i++)
        {
            if( i < len_n1) c += n1[i] - '0';
            if( i < len_n2) c += n2[i] - '0';

            sum[i] = (char)( c%10 + '0');
            sum[i+1] = '\0';
            if( c > 9 ) cnt++;
        }

            //strrev(sum);
            //cout << sum;

        if( cnt == 0) cout << "No carry operation.\n";
        else if( cnt ==1 ) cout << "1 carry operation.\n";
        else cout << cnt << " carry operations.\n";
    }
    return 0;
}

/*
No carry operation.
3 carry operations.
1 carry operation.
*/
