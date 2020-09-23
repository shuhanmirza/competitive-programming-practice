/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11172;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11172 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        int a, b, testcase, i;

        //scanf("%d",&testcase);
        testcase = scan.nextInt();

        for (i = 0; i < testcase; i++) {
            //scanf("%d %d",&a,&b);
            a = scan.nextInt();
            b = scan.nextInt();

            if (a < b) {
                System.out.print("<\n");
            } else if (a > b) {
                System.out.print(">\n");
            } else {
                System.out.print("=\n");
            }
        }
    }

}
