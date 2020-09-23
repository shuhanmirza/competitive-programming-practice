package uva_10070;

import java.util.*;

public class Uva_10070 {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        long a, b, c;
        while (scan.hasNext()) {
            
            a = scan.nextLong();
            if (a % 4 == 0 || a % 400 == 0) {
                System.out.println("This is leap year.");
                if (a % 15 == 0) {
                    System.out.println("This is huluculu festival year.");
                }
                if (a % 55 == 0) {
                    System.out.println("This is buluculu festival year.");
                }
            } else if (a % 15 == 0) {
                System.out.println("This is huluculu festival year.");
            } else {
                System.out.println("This is an ordinary year.");
            }
            System.out.println();
        }

    }

}
