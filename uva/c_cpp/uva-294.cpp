#include <stdio.h>
#include <math.h>

#define MAX 1000000001

long long max = 32000;
bool prime[32005];
/*
100 = 2^2 * 5^2

so it has ( 2+1) * (2+1) divisors......... it was my first algo to solve this problem........

but there is another algo where , i do not have to use sieve. only O(aqrt(n)) loop. I think it's awesome. I have learned many thing s while solving this problem

*/

int is_prime(long long n) // no need here
{
    long long i,b;

    if (n == 1) return 0;

     if( n == 2 )
     {
         return 1;
     }
    if(n%2==0)
    {
        return 0;
    }

          b=sqrt(n);

        for (i=3 ; i<=b; i=i+2)
        {
            if( n % i == 0 )
            {
                return 0;
            }
        }
            return 1;
}



void sieve()  // no need here
{
    long long i,j;
    for( i = 0 ; i <= max ; i++)
    {
        if( i == 0 || i == 1 ) prime[i] = false;

        else if( i == 2 ) prime[i] = true;

        else if( (i != 2) && ( i % 2 == 0)) prime[i] = false;

        else prime[i] = true;
    }

    for( i = 3 ; i <= max ; i+= 2)
    {
        if( prime[i] == true)
        {
            if( is_prime(i) == 1 )
            {
                for( j = 2 ; (i*j) <= max ; j++)
                {
                    prime[i*j] = false;
                }
            }

            else
            {
                prime[i] = false;
            }
        }
    }
}

long long count_divisor(long long num) // no need here.
{
    long long i,cnt,j,temp,div;

    cnt = 1; temp = 0; div = 2;

    if(num == 0) return 0;

    while( num > 1)
    {
        if( num % div == 0)
        {
            num /= div;
            temp++;
        }
            else
            {
                cnt *= (temp + 1);
                temp = 0;

                if( div == 2) div = 1;

                for( div += 2 ; div <= max ; div += 2)
                {
                    if( (is_prime(div) == 1) && (num % div == 0))
                        break;
                }
            }
    }

  cnt*=(temp+1);

        return cnt;
}

int main()
{
   unsigned long long i,j,T,L,H,P,max_d,cas,temp,div;

     scanf("%llu",&T) ;
     //Between 1 and 0, 4195948 has a maximum of 0 divisors.

    // sieve();
   while(T--)
    {
       scanf("%llu %llu",&L,&H);

            P = L;
            max_d = 0;

                for( i = L ; i <= H ; i++)
                {
                    div = 0;
                    temp = sqrt(i);

                    for( j = 1 ; j <= temp ; j++)
                    {
                        if( i % j == 0)
                        {
                            div++;
                            if( i / j != j)
                            {
                                div++ ;  // NOTE THAT,EVERY SQUARE NUMBER HAS ODD DIVISORS..... :D
                            }
                        }
                    }

                    if( div > max_d)
                    {
                        max_d = div;
                        P = i;
                    }
                }

                printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",L,H,P,max_d);
    }
    return 0;
}
