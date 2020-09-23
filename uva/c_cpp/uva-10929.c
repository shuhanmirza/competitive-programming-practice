#include <stdio.h>
#include <string.h>

int main()
{
    char number[1050];
    int i,remainder,lenght;

    while(1)
    {
        gets(number);

            remainder = 0;
            lenght = strlen(number);

                if(number[0] == '0' && lenght == 1) break;

            for(i = 0 ; i < lenght ; i++)
            {
                remainder = ( remainder * 10 ) + ( number[i] - '0' ) ;

                remainder = remainder % 11;
            }

            if(remainder == 0)
            {
                printf("%s",number);
                    printf(" is a multiple of 11.\n");
            }
                else
                {
                    printf("%s",number);
                    printf(" is not a multiple of 11.\n");
                }
    }

    return 0;
}
