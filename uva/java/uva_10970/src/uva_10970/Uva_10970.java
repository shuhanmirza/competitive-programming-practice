package uva_10970;

import java.util.*;

public class Uva_10970 {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        int a, b, c;
        while (scan.hasNext()) {
            
            a = scan.nextInt();
            b = scan.nextInt();
            c = (a * b) - 1;

            System.out.println(c);
        }

    }

}
