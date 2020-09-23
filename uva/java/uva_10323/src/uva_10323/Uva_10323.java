/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_10323;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_10323 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        long n;
        while (scan.hasNext()) {
            n = scan.nextLong();
            if (n < 0 && n % 2 == 0) {
                System.out.print("Underflow!\n");
            } else if (n < 0 && n % 2 != 0) {
                System.out.print("Overflow!\n");
            } else if (n == 0 || n <= 7) {
                System.out.print("Underflow!\n");
            } else if (n == 8) {
                System.out.print("40320\n");
            } else if (n == 9) {
                System.out.print("362880\n");
            } else if (n == 10) {
                System.out.print("3628800\n");
            } else if (n == 11) {
                System.out.print("39916800\n");
            } else if (n == 12) {
                System.out.print("479001600\n");
            } else if (n == 13) {
                System.out.print("6227020800\n");
            } else if (n > 13) {
                System.out.print("Overflow!\n");
            }
        }
    }

}
