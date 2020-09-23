/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11636;

import java.util.*;

/**
 *
 * @author DELL
 */
public class Uva_11636 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        int cas, ans, input;
        double temp, ans_1;

        cas = 1;

        while (scan.hasNext()) {
            input = scan.nextInt();
            if (input <= 0) {
                break;
            }

            ans_1 = Math.log10(input) / Math.log10(2.0);
            ans = (int) ans_1;

            if ((ans_1 - (double) ans) > 0.00001) {
                ans++;
            }

            System.out.println("Case " + cas + ": " + ans);
            cas++;
        }
    }

}
