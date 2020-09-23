#include <stdio.h>

int main()
{
    double input[8],ans_x,ans_y;
    int i,c_x,c_y,j;

    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &input[0] ,&input[1],&input[2],&input[3],&input[4],&input[5],&input[6],&input[7]) == 8)
    {
          for( i = 0 ; i < 8 ; i+=2)
          {
              for( j = i+2 ; j < 8 ; j+=2 )
              {
                 if( ( input[i] == input[j] ) && ( input[i+1] == input [j+1] ))
                 {
                     ans_x = 0 - input[i];
                     ans_y = 0 - input[i+1];
                     input[i] = 0.0;
                     input[i+1] = 0.0;
                     input[j] = 0.0 ;
                     input[j+1] = 0.0;

                     i = 10;
                     j = 10;
                 }

              }
          }

              for( i = 0 ; i < 8 ; i+= 2)
              {
                  ans_x += input[i];
                  ans_y += input[i+1];
              }

        printf("%0.3lf %0.3lf\n",ans_x,ans_y);
    }

    return 0;
}
