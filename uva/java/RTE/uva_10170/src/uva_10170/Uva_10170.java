package uva_10170;

import java.util.*;

public class Uva_10170 {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int i = 0, j, k, l, n, med;

        int ara[] = new int[10010];

        while (scan.hasNext()) {
            n = scan.nextInt();

            ara[i] = n;
            Arrays.sort(ara, 0, i + 1);

            if (i % 2 != 0) //i odd, mane even number
            {
                med = (ara[i / 2] + ara[(i / 2) + 1]) / 2;
            } else {
                med = ara[i / 2];
                
            }

            i++;
            
            if(i%2 == 0 )System.out.println(med);

        }
    }

}
