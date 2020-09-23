/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11727;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11727 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        int i, a, b, c, testcase;

        //scanf("%d",&testcase);
        testcase = scan.nextInt();

        for (i = 1; i <= testcase; i++) {
            //scanf("%d %d %d",&a,&b,&c);
            a = scan.nextInt();
            b = scan.nextInt();
            c = scan.nextInt();

            if ((a < b && a > c) || (a > b && a < c)) {
                System.out.print("Case " + i + ": " + a + "\n");
            } else if ((b < c && b > a) || (b > c && b < a)) {
                System.out.print("Case " + i + ": " + b + "\n");
            } else {
                System.out.print("Case " + i + ": " + c + "\n");
            }
        }
    }

}
