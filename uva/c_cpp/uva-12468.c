#include <stdio.h>

int main()
{
    int a,b,i,j_1,j_2,cas;


    while( scanf("%d %d",&a,&b) == 2)
    {
        if( a < 0) break;

        i = a;
        j_1 = 0;
        while( i != b)
        {
            if(i == 99) i = 0;
            else i++;

            j_1++;
        }

        i = a;
        j_2 = 0;
        while( i != b)
        {
            if(i == 0) i = 99;
            else i--;

            j_2++;
        }

        if( j_1 > j_2) j_1 = j_2;

        printf("%d\n",j_1);
    }
    return 0;
}

