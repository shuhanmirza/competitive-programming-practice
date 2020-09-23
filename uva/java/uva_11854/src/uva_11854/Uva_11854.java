/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11854;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11854 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        long a, b, c;

        while (scan.hasNext()) {
            a = scan.nextLong();
            b = scan.nextLong();
            c = scan.nextLong();

            if ((a + b + c) == 0) {
                break;
            }

            if (a > b && a > c) {
                if ((a * a) == ((b * b) + (c * c))) {
                    System.out.print("right\n");
                } else {
                    System.out.print("wrong\n");
                }
            } else if (b > a && b > c) {
                if ((b * b) == ((a * a) + (c * c))) {
                    System.out.print("right\n");
                } else {
                    System.out.print("wrong\n");
                }
            } else if ((c * c) == ((b * b) + (a * a))) {
                System.out.print("right\n");
            } else {
                System.out.print("wrong\n");
            }
        }
    }

}
