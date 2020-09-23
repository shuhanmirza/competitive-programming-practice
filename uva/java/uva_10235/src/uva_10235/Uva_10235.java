/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_10235;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_10235 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        long n, i, power, m;

        while (scan.hasNext()) {

            n = scan.nextLong();

            if (is_prime(n) == 0) {
                System.out.print(n + " is not prime.\n");
            } else {
                i = n;
                power = 1;

                while (i >= 1) {
                    i /= 10;
                    power *= 10;
                }

                power /= 10;

                m = 0;
                i = n;
                while (n >= 1) {
                    m += power * (n % 10);

                    n /= 10;
                    power /= 10;
                }

                n = i;

                if (is_prime(m) == 1 && n != m) {
                    System.out.print(n + " is emirp.\n");
                } else {
                    System.out.print(n + " is prime.\n");
                }
            }
        }
    }

    private static long is_prime(long n) {
        long i, b;

        if (n == 1) {
            return 0;
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
