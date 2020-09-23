#include<cstdio>
#include<cstring>
#include <string>
#include <iostream>
#include<cctype>
#include <cstdlib>

using namespace std;

string modify(string str)
{
    string mod;
    char c;
   int len= str.size(),k,i;

       // mod[0]='\0';


        k=0;
        for(i=0 ; i<len ; i++)
        {
            if(isalpha(str[i]) > 0 )
             {
                c=str[i];
                c=tolower(c) ;
                mod += c;
                // modify[k+1]='\0';
                //k++;
            }
        }

        return mod;
}

int count_love( int n)
{
    char ch[50];
    int sum,i,len,j;

    sum = n;
    while( sum > 9 )
    {
        j = sum;
        i = 0;
        while( j > 0)
        {
            ch[i] = j%10 + '0';

            j /= 10;
            i++;
        }
        ch[i] = '\0';

        len = strlen(ch);

        sum = 0;
        for( i = 0 ; i < len ; i++ )
        {
            sum += ch[i] - '0';
        }
    }

    return sum;
}

int main()
{
    string lover1,lover2;
    int i,len1,len2,cnt1,cnt2;
    double ans;

   while(getline(cin,lover1) ,  getline(cin,lover2))
    {
        lover1 = modify(lover1);
        lover2 = modify(lover2);

        len1=lover1.size();
        len2=lover2.size();

        cnt1 = 0;
        cnt2 = 0;

        for( i = 0 ; i < len1 || i < len2 ; i++ )
        {
            if( i < len1 )
            {
                cnt1 += lover1[i] - 'a' + 1;
            }

            if( i < len2 )
            {
                cnt2 += lover2[i] - 'a' + 1;
            }

        }

        cnt1 = count_love(cnt1);
        cnt2 = count_love(cnt2);

            ans = ((double)cnt1) / ((double)cnt2) ;

            if( ans > 1.00) ans = 1 / ans ;

            ans *= 100.00;

         printf("%0.2lf %%\n",ans);

    }

         return 0;
}

