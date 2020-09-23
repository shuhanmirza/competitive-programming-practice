package uva_10925;

import java.util.*;
import java.math.*;
//import java.io.BufferedReader;
import java.io.IOException;
//import java.io.InputStreamReader;

public class Uva_10925 {

    public static void main(String[] args) throws IOException {
        
        //BufferedReader scan = new BufferedReader(new InputStreamReader(System.in));
        Scanner scan = new Scanner(System.in);
        
        int bill, N, F, i;
        
        bill = 1;
        while (scan.hasNext()) {
            
            N = scan.nextInt();
            
            F = scan.nextInt();
            
            if (N == 0) {
                break;
            }
            
            BigInteger sum = BigInteger.ZERO;
            
            for ( i = 0; i < N; i++) 
            {
                BigInteger a = scan.nextBigInteger();
                //cin >> input;

                sum = sum.add(a);
            }

           BigInteger div = sum;
           
           div = div.divide( BigInteger.valueOf((long)F )) ;
           
            //        Bill #1 costs 16200000000: each friend should pay 5400000000
            System.out.print("Bill #");
            System.out.print(bill++);
            System.out.print( " costs " );
            System.out.print(sum);
            System.out.print(": each friend should pay ");
            System.out.print(div) ;
            System.out.print("\n\n");
        }

    }

}
