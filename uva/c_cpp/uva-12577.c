#include <stdio.h>

int main()
{
    long long i;
    char input[100];

    i=1;
    while(1)
    {
        gets(input);

        if( input[0] == '*' )
        {
            break;
        }
            else if(input[0] == 'H')
            {
                printf("Case %lld: Hajj-e-Akbar\n",i);
                i++;
            }
                else
                {
                    printf("Case %lld: Hajj-e-Asghar\n",i);
                    i++;
                }
    }

    return 0;
}
