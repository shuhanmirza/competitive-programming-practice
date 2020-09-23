/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11805;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11805 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        int T, N, K, P, i, j, cas;

        //scanf("%d", &T);
        T = scan.nextInt();

        for (cas = 1; cas <= T; cas++) {
            //scanf("%d %d %d",&N,&K,&P);
            N = scan.nextInt();
            K = scan.nextInt();
            P = scan.nextInt();

            i = 0;
            j = K;
            while (i < P) {
                if (j == N) {
                    j = 1;
                } else {
                    j++;
                }

                i++;
            }

            System.out.print("Case " + cas + ": " + j + "\n");
        }
    }

}
