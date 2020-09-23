/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_12468;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_12468 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here
        int a, b, i, j_1, j_2, cas;

        while (scan.hasNext()) {
            //scanf("%d %d",&a,&b) == 2
            a = scan.nextInt();
            b = scan.nextInt();

            if (a < 0) {
                break;
            }

            i = a;
            j_1 = 0;
            while (i != b) {
                if (i == 99) {
                    i = 0;
                } else {
                    i++;
                }

                j_1++;
            }

            i = a;
            j_2 = 0;
            while (i != b) {
                if (i == 0) {
                    i = 99;
                } else {
                    i--;
                }

                j_2++;
            }

            if (j_1 > j_2) {
                j_1 = j_2;
            }

            System.out.println(j_1);
        }
    }

}
