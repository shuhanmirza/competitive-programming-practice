package uva_11877;

import java.util.*;

public class Uva_11877 {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        int n, ans;

        while (scan.hasNext()) {
            
            n = scan.nextInt();
            if (n == 0) {
                break;
            }
            ans = 0;
            while (n > 1) {
                if (n == 2) {
                    ans = ans + 1;
                    break;
                }
                ans = ans + (n / 3);
                n = (n / 3) + (n % 3);

            }

            System.out.println(ans);

        }
    }

}
