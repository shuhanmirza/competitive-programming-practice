#include <stdio.h>

int main()
{
    int X_1,Y_1,X_2,Y_2,i,dif_X,dif_Y;

    while(1)
    {
        scanf("%d %d %d %d",&X_1,&Y_1,&X_2,&Y_2);

        if((X_1 + Y_1 + X_2 + Y_2) < 4) break;

        else
        {
            dif_X = X_1 - X_2;
            if(dif_X < 0) dif_X = (-1) * dif_X;

                dif_Y = Y_1 - Y_2;
                if(dif_Y < 0) dif_Y = (-1) * dif_Y;

            if(X_1 == X_2 && Y_1 == Y_2)
            {
                printf("0\n");
            }

                else if( X_1 == X_2 || Y_1 == Y_2 )
                    {
                        printf("1\n");
                    }


                   else if( dif_X == dif_Y )
                        {
                            printf("1\n");
                        }

                            else
                            {
                                printf("2\n");
                            }
        }
    }

    return 0;
}
