#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[200],c[200],g;
    int a,i,j,k,l,ll,cnt;

   while(scanf(" %[^\n]s", s) == 1)
    {
        l=strlen(s);

           if(l == 4 && s[0] == 'D' && s[1]=='O' && s[2]=='N' && s[3]=='E')
           {
               break;
           }

       else{
                c[0]='\0';

                 k=0;
                 cnt=0;

              for(i=0 ; i<l ; i++)
              {
                  if(isalpha(s[i]) > 0 )
                  {
                    g=s[i];
                    g=tolower(g) ;

                    c[k]=g;
                    c[k+1]='\0';

                       k++;
                  }
              }

            ll=strlen(c);

              a=ll-1;

              for(j=0 ; j<ll; j++)
              {
                  if(c[j] == c[a])
                  {
                      cnt = cnt+1;
                  }
                  a--;
              }

              if( cnt == ll )
              {
                  printf("You won't be eaten!\n");
              }

                else
                {
                    printf("Uh oh..\n");
                }
       }

    }
         return 0;
}
