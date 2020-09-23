#include <stdio.h>

int main()
{
    int i,T,hh,mm;
    char time[10];

    scanf("%d",&T);

    while(T--)
    {
        scanf(" %[^\n]",time);

         hh = 10*(time[0]-'0') + time[1] - '0';
         mm = 10*(time[3]-'0') + time[4] - '0';

         if( hh == 12 && mm ==0) printf("12:");
            else if( hh == 6 && mm == 0) printf("06:");
                else if( hh == 12 && mm !=0) printf("11:");
                    else if( hh == 6 && mm != 0) printf("05:");
                else
                {
                    hh = 12 - hh;
                    if( mm != 0) hh--;

                    if(hh>9) printf("%d:",hh);
                    else if( hh == 0) printf("12:",hh);
                    else printf("0%d:",hh);
                }

                if( mm == 0) printf("00\n");
                    else if( mm == 30) printf("30\n");
                        else
                        {
                            mm = 60 - mm;
                            if(mm>9) printf("%d\n",mm);
                            else printf("0%d\n",mm);
                        }
    }

    return 0;
}
