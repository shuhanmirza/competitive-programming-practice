/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_10924;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_10924 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        String input;
        long siz, value;
        int i;

        while (scan.hasNext()) {
            input = scan.nextLine();
            value = 0;

            siz = input.length();

            for (i = 0; i < siz; i++) {
                if (input.charAt(i) >= 'a' && input.charAt(i) <= 'z') {
                    value = 1 + value + (input.charAt(i) - 'a');
                } else {
                    value = 1 + value + (input.charAt(i) - 'A') + 26;
                }
            }

            if (is_prime(value) == 1) {
                System.out.println("It is a prime word.");
            } else {
                System.out.println("It is not a prime word.");
            }

        }
    }

    private static int is_prime(long n) {
        long i, b;

        if (n == 1) {
            return 1;
        }

        if (n == 2) {
            return 1;
        }
        if (n % 2 == 0) {
            return 0;
        }

        b = (long) Math.sqrt((double) n);

        for (i = 3; i <= b; i = i + 2) {
            if (n % i == 0) {
                return 0;
            }
        }

        return 1;
    }

}
