/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11150;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11150 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        int cola, ans, flag, borrow;

        while (scan.hasNext()) {
            cola = scan.nextInt();

            if (cola % 2 == 0) {
                borrow = 2;
            } else {
                borrow = 1;
            }

            ans = cola;
            cola += borrow;

            while (cola > 2) {
                ans += (cola / 3);
                cola = (cola / 3) + (cola % 3);
            }
            System.out.println(ans);
        }
    }

}
