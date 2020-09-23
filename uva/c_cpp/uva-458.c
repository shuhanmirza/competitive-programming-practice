#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

char str[10001];

void print(int i, int sav)
{
    int j;
    for(j=i;j>=sav;j--)
    {
        char c=str[j];
        putchar(c);
    }
}

int main()
{
    int l,i,sav,j;

    char ch;

    while(scanf(" %[^\n]s",str)==1)
    {
       l=strlen(str);
       sav=0;

       for(i=0;i<l;i++)
       {
           ch=str[i];
           if(isspace(ch)!=0)
           {
               print(i-1,sav);
               printf(" ");
               sav=i+1;
           }

           if(i == l-1)
           {
               print(i,sav);
               printf("\n");
           }


        }
       }

    return 0;
}
