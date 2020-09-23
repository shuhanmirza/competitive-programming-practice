#include <stdio.h>
#include <string.h>
#include <ctype.h>

//char str[100001]; // size barbe
char ch,save;

int main()
{
    int i,j,k,flag_d,flag_w,flag_c,flag_v;

    flag_c=0;
    flag_v=0;
    flag_w=0;
    flag_d = 0;

    while(scanf("%c",&ch) == 1)
    {
        if( isalpha(ch))
        {
            if( flag_w == 1)
            {
                putchar(ch);

            }

            else
            {
                if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||  ch=='A' || ch=='E' || ch=='I'|| ch=='O' || ch== 'U')
                {
                    flag_w = 1;
                    flag_v = 1;
                    flag_c = 0;
                    putchar(ch);
                }

                else if( isalpha(ch) == 0)
                {
                    putchar(ch);
                }
                else
                {
                    flag_w = 1;
                    flag_v = 0;
                    flag_c = 1;
                    save = ch;
                }

            }
        }

        else
        {
            if( flag_w == 1)
            {
                flag_w = 0;

                if( flag_c == 1)
                {
                    flag_c = 0;
                    putchar(save);
                    putchar('a');
                    putchar('y');
                    //   if(flag_d == 1)
                    // {
                    //  putchar('.');
                    //    flag_d = 0;
                    //}
                    putchar(ch);

                }
                if( flag_v == 1)
                {
                    flag_v = 0;
                    //putchar(save);
                    putchar('a');
                    putchar('y');
                    //  if(flag_d == 1)
                    //{
                    // putchar('.');
                    //flag_d = 0;
                    // }
                    putchar(ch);
                }
            }

            else
            {
                putchar(ch);
            }
        }


    }
    return 0;
}
