package uva_11713;

import java.util.*;

public class Uva_11713 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        char [] c = new char[1000];
        char [] d = new char[1000];
        
        int i, j, x, y, n, k;
        n = 0;

        k = scan.nextInt();
        scan.nextLine();

        for (j = 1; j <= k; j++) {
            
            String s = scan.nextLine();
            c = s.toCharArray();
            
            s = scan.nextLine();
            d = s.toCharArray();

            x = c.length;
            y = d.length;
            
            //System.out.println(c);
            //System.out.println(d);

            if (x == y) {
                for (i = 0; i < x; i++) {
                    if ((c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u') && (d[i] == 'a' || d[i] == 'e' || d[i] == 'i' || d[i] == 'o' || d[i] == 'u')) {

                    } else if (c[i] == d[i]) {

                    } else {
                        n = n + 1;
                    }

                }

                if (n != 0) {
                    System.out.println("No");
                } else {
                    System.out.println("Yes");
                }
            } else {
                System.out.println("No");
            }

            n = 0;

        }
    }

}
