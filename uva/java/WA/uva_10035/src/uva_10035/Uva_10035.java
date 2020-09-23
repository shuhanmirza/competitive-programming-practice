package uva_10035;

import java.util.*;

public class Uva_10035 {

     static Scanner scan = new Scanner(System.in);
     
    public static void main(String[] args) {
  
        long c,cnt,temp,num1,num2,len_n1,len_n2;
        int i;
       char sum[] = new char[200];
       char n1[] = new char[100];
       char n2[] = new char[100];

    while( scan.hasNext())
    {
        
       num1 = scan.nextLong();
       num2 = scan.nextLong();
       
        if( num1 == 0 && num2 == 0) break;

        cnt = 0;
        c=0;
        i = 0;

        //if(num1 < num2 ) swap(num1,num2);

        while(num1 > 0 || num2 > 0)
        {
           if( num1 > 0)
           {
                n1[i] = (char)((num1 % 10) + '0');
                num1 /= 10;
                n1[i+1] = '\0';
           }
           if( num2 > 0)
           {
                n2[i] = (char)((num2 % 10) + '0');
                num2 /= 10;
                n2[i+1] = '\0';
           }

           i++;
        }

           //cout << n1 << n2 <<"\n";

        len_n1 = n1.length;
        len_n2 = n2.length;

        for( i = 0 ; i < len_n1 || i < len_n2  || c > 0 ; c/= 10, i++)
        {
            if( i < len_n1) c += n1[i] - '0';
            if( i < len_n2) c += n2[i] - '0';

            sum[i] = (char)( c%10 + '0');
            sum[i+1] = '\0';
            if( c > 9 ) cnt++;
        }

            //strrev(sum);
            //cout << sum;

        if( cnt == 0) System.out.println("No carry operation.");
        
        else if( cnt ==1 ) System.out.println ("1 carry operation.");
        else System.out.println( cnt + " carry operations.");
    }
    }
    
}
