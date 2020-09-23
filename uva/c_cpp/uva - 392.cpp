
#include<stdio.h>

int main()
{
    int a[10],count,i;

    while(scanf("%d %d %d %d %d %d %d %d %d", &a[8], &a[7], &a[6], &a[5],&a[4], &a[3], &a[2], &a[1], &a[0]) == 9)
    {
        count=0;

        for(i=8 ; i>=0; i--)
        {
            if(i==0 && a[i]==0 && count==0)
            {
                printf("%d",a[i]);
            }
            if(a[i]!=0)    /*zero borjon kora holo*/
            {
                if(i==0)
                {
                    if(count!=0)
                    {
                        if(a[i]<0)
                        {
                            a[i]=-a[i];

                            printf(" - %d",a[i]);
                        }

                        else
                        {
                            printf(" + %d",a[i]);
                        }
                    }
                    else
                    {
                        printf("%d",a[i]);
                        count++;
                    }
                    continue;
                }
                if(i==1)   /*x^1=x*/
                {
                    if(count!=0)   /*jokhon ei print ta pothom print noe*/
                    {
                        if(a[i]==1)
                        {
                            printf(" + x"); /* x * 1 = x*/
                        }

                        if (a[i]>1)
                        {
                            printf(" + %dx",a[i]);
                        }

                        if (a[i]==-1)
                        {
                            printf(" - x"); /* x * -1 = -x  */
                        }

                        if(a[i] < -1)
                        {
                            a[i]=-a[i];
                            printf(" - %dx",a[i]);
                        }

                    }

                    else
                    {
                        if(a[i]==1)
                        {
                            printf("x", i); /* 1st print */
                            count++;
                        }

                        if(a[i] > 1)
                        {
                            printf("%dx",a[i]);  /* 1st print */
                            count++;
                        }

                        if(a[i]==-1)
                        {
                            printf("-x"); /* x * -1 = -x  */

                            count++;
                        }

                        if(a[i] < -1)
                        {
                            printf("%dx",a[i]); /* x * -1 = -x  */

                            count++;
                        }

                    }
                    continue;
                }
                if(a[i]>0)   /* for positive number*/
                {
                    if(count!=0)   /*jokhon ei print ta pothom print noe*/
                    {
                        if(a[i]==1)
                        {
                            printf(" + x^%d", i); /* x * 1 = x*/
                        }


                        else
                        {
                            printf(" + %dx^%d",a[i], i);
                        }

                    }
                    else
                    {
                        if(a[i]==1)
                        {
                            printf("x^%d", i); /* 1st print */
                            count++;
                        }

                        else
                        {
                            printf("%dx^%d",a[i], i);  /* 1st print */
                            count++;
                        }

                    }
                }
                else             /* for negitive number*/
                {
                    if(count!=0)        /*jokhon ei print ta pothom print noe*/
                    {
                        if(a[i]==-1)
                        {
                            printf(" - x^%d", i); /* x * -1 = -x  */
                        }


                        else
                        {
                            a[i]=-a[i];
                            printf(" - %dx^%d",a[i], i);
                        }

                    }

                    else
                    {
                        /* 1st print */
                        if(a[i]== -1)
                        {
                            printf("-x^%d", i);
                            count++;
                        }
                        else
                        {
                            printf("%dx^%d",a[i], i);
                            count++;
                        }
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
