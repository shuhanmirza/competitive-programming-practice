#include <stdio.h>
#include <ctype.h>
#include <string.h>

char s[105],t[105],ans[105];

int length_s,length_t,i;

int check_input()
{


      length_s = strlen(s);
        length_t = strlen(t);

        if( length_s != length_t) return 0;

        for( i=0; i < length_s ; i++)
        {


            if( (islower(s[i]) == 0) || (islower(t[i]) == 0) )
            {
                return 0;
            }

        }




            for( i=0; i < length_s ; i++)
            {
                if(s[i] < t[i]) break;
                if(s[i] > t[i]) return 0;
            }



        return 1;
}

int main()
{
  int check,flag;


    scanf("%s",&s);
    scanf("%s",&t);

    check=check_input();

    if(check == 0)
    {
        printf("No such string");
    }

    else
    {
        check =0;
        flag=0;

        for( i=0 ; i< length_s;i++)
        {
           if ( s[i] > t[i] && s[i]=='z' && s[i-1] < 'z' && flag==0 )
           {
               ans[i-1]++;

               ans[i]='a';
               flag=1;
           }

           else if(s[i] > t[i])
            {

                ans[i] = s[i]+1;

               if(ans[i] > 'z') ans[i]='a';
            }

         else
            {
               ans[i] = s[i] + ((t[i] - s[i])/2);
            }



         if ( ans[i] != s[i]) check=1;

        }

         if( check == 0) printf("No such string");

        else
        {
              puts(ans);
        }
    }




  return 0;
}
