#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    long long cas,r,i,input,T,temp,count_1,j,len;
    char s[100],ch[100];

    scanf("%lld",&T);

   for(cas = 1 ; cas <= T ; cas++)
   {
        scanf("%lld",&input);
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

        if( count_1 % 2 != 0) printf("Case %lld: odd\n",cas);
            else printf("Case %lld: even\n",cas);

    }

            return 0;
}


