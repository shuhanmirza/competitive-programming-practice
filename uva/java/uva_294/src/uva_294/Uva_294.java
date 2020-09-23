package uva_294;

import java.util.*;
import java.lang.*;

public class Uva_294 {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        long i, j, T, L, H, P, max_d, cas, temp, div;

        T = scan.nextLong();
        //Between 1 and 0, 4195948 has a maximum of 0 divisors.

        // sieve();
        while (T-- > 0) {
            L = scan.nextLong();
            H = scan.nextLong();

            P = L;
            max_d = 0;

            for (i = L; i <= H; i++) {
                div = 0;
                temp = (long) Math.sqrt((double)i) ;

                for (j = 1; j <= temp; j++) {
                    if (i % j == 0) {
                        div++;
                        if (i / j != j) {
                            div++;  // NOTE THAT,EVERY SQUARE NUMBER HAS ODD DIVISORS..... :D
                        }
                    }
                }

                if (div > max_d) {
                    max_d = div;
                    P = i;
                }
            }

            System.out.println("Between " + L + " and "+ H + ", " + P + " has a maximum of " + max_d + " divisors.");
        }

    }
}
