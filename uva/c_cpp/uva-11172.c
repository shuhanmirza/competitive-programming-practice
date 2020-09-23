#include <stdio.h>

int main()
{
    int a,b,testcase,i;

    scanf("%d",&testcase);

        for(i=0 ; i < testcase ; i++ )
        {
            scanf("%d %d",&a,&b);

                if( a < b) printf("<\n");
                    else if( a > b) printf(">\n");
                        else printf("=\n");
        }

        return 0;

}
