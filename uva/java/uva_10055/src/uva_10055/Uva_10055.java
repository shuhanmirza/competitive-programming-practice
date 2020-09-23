package uva_10055;

import java.util.*;

public class Uva_10055 {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        long a, b, c;
        while (scan.hasNext()) {
            
            a = scan.nextLong();
            b = scan.nextLong();
            c = a - b;
            if (c < 0) {
                c = -c;
            }
            System.out.println(c);
        }

    }

}
