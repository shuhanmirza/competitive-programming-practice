#include <stdio.h>
#include <stdlib.h>

int main()
{



int a,i;



printf("Enter the number: ");



scanf("%d", &a);




for(i=2; i <a; i++)



{



system("cls");



if(a%i == 0)



{



printf("\n\nNumber not prime.");



}



else



{



printf("\n\nNumber is prime.");



}



}



getchar();
}
