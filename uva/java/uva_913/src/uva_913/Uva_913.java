package uva_913;

import java.util.*;

public class Uva_913 {

    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        long x, n, ans;

        while (scan.hasNext()) {
            n = scan.nextLong();
            x = (n - 1) / 2;
            x++;
            x = (2 * x * x) + 1;
            ans = x - 2 + x - 4 + x - 6;

            System.out.println(ans);
        }

    }
}
