#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    long long r,i,input,temp,count_1,j,len;
    char s[100],ch[100];


    while( scanf("%lld",&input) == 1 )
    {
        if( input == 0) break;

        i=0;
      //  s[i]='/0';
        temp = input;
        count_1 = 0;

        while( temp != 0 )
        {
            r = temp%2;
            temp = temp/2;

            if(r == 1)
            {
                s[i] = '1';

                  //  s[i+1]='\0';

                i++;

                count_1++;
            }

                else
                {
                     s[i]='0';

                     //s[i+1]='\0';

                        i++;
                }

        }
        s[i] = '\0';
        len = i;

        for( i = 0,j = (len - 1) ; i < len ; i++,j-- )
        {
            ch[i] = s[j];
        }
        ch[len] = '\0';

        printf("The parity of %s is %lld (mod 2).\n",ch,count_1);

    }

            return 0;
}

