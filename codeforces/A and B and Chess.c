#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i,j,white,black,b_king,w_king;
    char chess[15];

    white=0; black=0; b_king=0; w_king=0;

    for(i=0;i<8;i++)
    {

       gets(chess);


        for(j=0;j<8; j++)
        {
                    if(chess[j] == 'Q') white+=9;
                    else if(chess[j] == 'R') white+=5;
                    else if(chess[j] == 'B') white+=3;
                    else if(chess[j] == 'N') white+=3;
                    else if(chess[j] == 'P') white+=1;


                    else if(chess[j]=='q') black+=9;
                    else if(chess[j]=='r') black+=5;
                    else if(chess[j]=='b') black+=3;
                    else if(chess[j]=='n') black+=3;
                    else if(chess[j]=='p') black+=1;
        }
    }

    if( black > white) printf("Black");
     else if( black < white) printf("White");
       else if(black == white)   printf("Draw");


    return 0;
}
