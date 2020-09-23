#include<stdio.h>
#include<string.h>
#include<ctype.h>

char str[100001],ch;

int main()
{
    int i,j,k,l,sav;

      while(scanf(" %[^\n]s",str)==1)
      {
          l=strlen(str);
          sav=0;

          for(i=0;i<l;i++)
          {
              ch=str[i];

              if(isalpha(ch)==0)
              {
                  ch=str[sav];

                    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||  ch=='A' || ch=='E' || ch=='I'|| ch=='O' || ch== 'U')
                            {
                                 for(j=sav;j<i;j++)
                                 {
                                     ch=str[j];
                                     putchar(ch);
                                 }
                                    ch=str[i];
                                    printf("ay%c",ch);
                                    sav=i+1;
                            }

                            else
                            {
                                for(j=sav+1;j<i;j++)
                                 {
                                     ch=str[j];
                                     putchar(ch);
                                 }
                                    ch=str[sav];
                                    putchar(ch);

                                    ch=str[i];
                                    printf("ay%c",ch);
                                    sav=i+1;
                            }

                }

                    if(i+1 == l)
                    {
                        ch=str[sav];

                    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||  ch=='A' || ch=='E' || ch=='I'|| ch=='O' || ch== 'U')
                            {
                                 for(j=sav;j<=i;j++)
                                 {
                                     ch=str[j];
                                     putchar(ch);
                                 }
                                    ch=str[i];
                                    printf("ay",ch);
                                    sav=i+1;
                            }

                            else
                            {
                                for(j=sav+1;j<=i;j++)
                                 {
                                     ch=str[j];
                                     putchar(ch);
                                 }
                                    ch=str[sav];
                                    putchar(ch);

                                    ch=str[i];
                                    printf("ay",ch);
                                    sav=i+1;
                            }
                    }
              }

              printf("\n");
    }
    return 0;
}

