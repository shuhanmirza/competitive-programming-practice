#include <stdio.h>
#include <string.h>


int main()
{
    int p,l,i,flag;
    char s[100000];

    flag = 0;

    while(gets(s))
    {
        p=0;
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]=='"')
            {
                if(flag == 0)
                {
                    printf("``");
                    flag = 1 ;
                }

                else
                {
                    printf("''");
                    flag = 0;
                }

            }
            else
                printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
