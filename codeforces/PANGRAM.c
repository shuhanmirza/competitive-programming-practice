#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int loop,length,check,flag;
    char ch[105],i,j;

    scanf("%d",&length);

    getchar();
    gets(ch);

    check=0;
    flag=0;

    if(length < 26)
    {
        printf("NO");
    }

    else
    {
        for( i='a',j='A' ; i<='z' ; i++,j++)
        {
            for(loop = 0 ; loop < length ; loop++)
            {
                if(ch[loop] == i || ch[loop] == j)
                {
                    check++;
                    break;
                }

                if( (loop+1) == length)
                {
                    flag++;
                }
            }


             if(flag != 0) break;
        }


        if(check >= 26) printf("YES");
        else if(check < 26 || flag!=0) printf("NO");
    }
    return 0;
}
