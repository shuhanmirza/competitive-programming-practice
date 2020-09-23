/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11461;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11461 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        double a, b, i, temp, check;
        int temp_cast, ans;

        while (true) {
            //scanf("%lf %lf",&a,&b);;
            a = scan.nextDouble();
            b = scan.nextDouble();

            if (a == 0.0 && b == 0.0) {
                break;
            } else {
                ans = 0;
                for (i = a; i <= b; i++) {
                    temp = Math.sqrt(i);

                    temp_cast = (int) temp;

                    if ((temp - (double) temp_cast) <= 0.0001) {
                        ans++;
                    }
                }
            }

            System.out.println(ans);
        }
    }

}
