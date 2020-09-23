/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_10783;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_10783 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here
        int a, b, testcase, i, sum, n;

        testcase = scan.nextInt();

        for (i = 1; i <= testcase; i++) {
            //scanf("%d %d",&a,&b);

            a = scan.nextInt();
            b = scan.nextInt();

            sum = 0;

            if (a % 2 == 0) {
                n = a + 1;
            } else {
                n = a;
            }

            while (n <= b) {
                sum = sum + n;

                n = n + 2;
            }

            System.out.println("Case " + i + ": " + sum);
        }
    }

}
