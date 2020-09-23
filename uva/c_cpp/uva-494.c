#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
   int flag,i,j,k,l,count;
     char str[10001],ch;
     while(scanf(" %[^\n]s",str)==1)
     {
         l=strlen(str);
         flag=0;
         count=0;

         for(i=0;i<l;i++)
         {
             ch=str[i];
                if(flag==0)
                {
                    if(isalpha(ch)!=0)
                    {
                        flag=1;
                    }
                }
                    else
                    {
                        if(isalpha(ch)==0)
                        {
                            count++;
                            flag=0;
                        }
                    }
         }
         printf("%d\n",count);

     }
     return 0;

}
