package uva_374;

import java.util.*;

public class Uva_374 {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        long n, t, a, p, m;

        while (scan.hasNext()) {
            
            a = scan.nextLong();
            p = scan.nextLong();
            m = scan.nextLong();

            System.out.println(bigmod(a, p, m));
        }
    }

    private static long bigmod(long a, long p, long m) {
        if (p == 1) {
            return a % m;
        }
        
        if (p == 0) {
            return 1;
        } 
        
        else if ( p % 2 != 0) {
            return (a % m * bigmod(a, p - 1, m)) % m;
        } 
        else {
            long c = bigmod(a, p / 2, m);
            return (c * c) % m;
        }
    }

}
