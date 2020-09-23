#include<stdio.h>
int main()
{
    int a,b,i,T;
    int c=0;
    char h[25];
    char g='d';
    scanf("%d",&a);
    for(i=1;i<=a;i=i+1)
    {
        scanf("%s",&h);
        if(g==h[0])
        {
             scanf("%d",&b);
             c=c+b;
        }
        else
        {
           printf("%d\n",c);
        }
    }
    return 0;
}
