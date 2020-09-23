package uva_10346;

import java.util.*;

public class Uva_10346 {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        long n, k, i, ans, tmp, tmp_1, mem;

        while (scan.hasNext()) {
            
            n = scan.nextLong();
            k = scan.nextLong();
            
            tmp_1 = n;
            tmp = n / k;
            ans = n;

            while (tmp != 0) {
                ans = ans + tmp;

                mem = (tmp_1 % k);
                tmp_1 = tmp + (tmp_1 % k);

                tmp = (tmp + mem) / k;

            }

            System.out.println(ans);
        }
    }

}
