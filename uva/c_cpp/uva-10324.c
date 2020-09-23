#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char zero_one[1000005],check;
    int i,j,loop1,loop2,c,query,cas,ans;

    cas = 1;
    while(gets(zero_one))
    {

        if(zero_one[0] == '\0') break;

        scanf("%d",&query);
        for( loop1 = 1; loop1 <= query ; loop1++)
          {
                scanf("%d %d",&i,&j);

                if(i > j)
                {
                    c = i;
                    i = j;
                    j = c;
                }

                  check = zero_one[i];

                    for(loop2 = i ; loop2 <= j ; loop2++)
                    {
                        if( zero_one[loop2] == check ) ans = 1;
                          else
                          {
                              ans = 0 ;
                              break;
                          }
                    }

                    if(loop1 == 1) printf ("Case %d:\n",cas);

                    if( ans == 1 ) printf("Yes\n");
                        else printf("No\n");
          }

          cas++;
          getchar();
    }
    return 0;
}
