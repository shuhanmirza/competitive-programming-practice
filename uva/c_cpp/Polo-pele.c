#include<stdio.h>
#include<string.h>

int main()
{
 char c[1000],d[1000];
 int i,j,x,y,n,k;
    n=0;

    scanf("%d",&k);

    for(j=1;j<=k;j++)
    {
        scanf("%s%s",&c,&d);

        x=strlen(c);
        y=strlen(d);


            if(x==y)
            {
                  for(i=0;i<x;i++)
                   {
                        if( (c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u')  && ( d[i]=='a' || d[i]=='e' || d[i]=='i' || d[i]=='o' || d[i]=='u') )
                        {

                        }

                        else
                         {
                                if(c[i]==d[i])
                                {

                                }
                                else
                                {
                                    n=n+1;
                                }
                         }

                   }


                   if(n!=0)
                   {
                       printf("No\n");
                   }

                   else
                   {
                      printf("Yes\n");
                   }
            }

            else
            {
                 printf("No\n");
            }

                n=0;



    }
    return 0;

}
