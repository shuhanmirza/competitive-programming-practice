/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11777;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11777 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        int T, ans, cas, tt_1, tt_2, att, fnl, ct_1, ct_2, ct_3;

        //scanf("%d",&T);
        T = scan.nextInt();

        for (cas = 1; cas <= T; cas++) {
            //scanf("%d %d %d %d %d %d %d",&tt_1,&tt_2,&fnl,&att,&ct_1,&ct_2,&ct_3);

            tt_1 = scan.nextInt();
            tt_2 = scan.nextInt();
            fnl = scan.nextInt();
            att = scan.nextInt();
            ct_1 = scan.nextInt();
            ct_2 = scan.nextInt();
            ct_3 = scan.nextInt();

            ans = tt_1 + tt_2 + fnl + att;

            if (ct_1 >= ct_2 && ct_3 >= ct_2) {
                ans += (ct_1 + ct_3) / 2;
            } else if (ct_1 >= ct_3 && ct_2 >= ct_3) {
                ans += (ct_1 + ct_2) / 2;
            } else {
                ans += (ct_3 + ct_2) / 2;
            }

            //A ≥ 90%• B ≥ 80% & < 90%• C ≥ 70% & < 80%• D ≥ 60% & < 70%• F < 60%
            if (ans >= 90) {
                System.out.print("Case " + cas + ": A\n");
            } else if (ans >= 80) {
                System.out.print("Case " + cas + ": B\n");
            } else if (ans >= 70) {
                System.out.print("Case " + cas + ": C\n");
            } else if (ans >= 60) {
                System.out.print("Case " + cas + ": D\n");
            } else {
                System.out.print("Case " + cas + ": F\n");
            }
        }
    }

}
