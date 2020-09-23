/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11498;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11498 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        int K, N, M, i, x, y;

        while (true) {
            //scanf("%d",&K);
            K = scan.nextInt();

            if (K == 0) {
                break;
            } else {

                //scanf("%d %d",&N,&M);
                N = scan.nextInt();
                M = scan.nextInt();

                for (i = 1; i <= K; i++) {
                    //scanf("%d %d",&x,&y);
                    x = scan.nextInt();
                    y = scan.nextInt();

                    if (x > N && y > M) {
                        System.out.print("NE\n");
                    } else if (x < N && y > M) {
                        System.out.print("NO\n");
                    } else if (x < N && y < M) {
                        System.out.print("SO\n");
                    } else if (x > N && y < M) {
                        System.out.print("SE\n");
                    } else {
                        System.out.print("divisa\n");
                    }
                }

            }
        }
    }

}
