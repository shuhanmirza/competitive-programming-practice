package uva_10290;

import java.util.*;

public class Uva_10290 {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        int a, b, count, d, i, j, k, sum, n;

        while (scan.hasNext()) {
            
            a = scan.nextInt();
            
            sum = 0;
            count = 0;
            
            for (i = 1; i <= a; i++) {
                for (j = i; j >= 1; j++) {
                    sum = sum + j;

                    if (sum == a) {
                        count = count + 1;
                    }

                    if (sum > a) {
                        break;
                    }

                }
                sum = 0;

            }
            System.out.println(count);
        }
    }

}
