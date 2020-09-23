package uva_100;

import java.util.*;
import java.io.*;

public class Uva_100 {

    public static void main(String[] args) throws IOException{
        
        Scanner scan = new Scanner(System.in);

        int i, j, cycle, a, b, c, max;
        long n;
        c = 0;

        while (scan.hasNext()) 
        {
            a = scan.nextInt();
            b = scan.nextInt();
            
            max = 0;

            if (a > b) 
            {
                c = a;
                a = b;
                b = c;
            }

            for (i = a; i <= b; i++) {
                n = i;
                cycle = 1;

                for (j = 1; j > 0; j++) {
                    if (n == 1) {
                        if (a == 1 && b == 1) {
                            max++;
                        }
                        break;
                    } else if (n % 2 == 0) {
                        n = n / 2;
                        cycle++;
                    } else {
                        n = (3 * n) + 1;
                        cycle++;
                    }

                    if (cycle > max) {
                        max = cycle;
                    }
                }
            }

            if (c == b) {
                System.out.println(String.format("%d %d %d",b, a, max));
            } else {
                 System.out.println(String.format("%d %d %d",a, b, max));
            }
    }

}

}
