/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_10954;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_10954 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        long input[] = new long[5002], k, n, swp, cost, temp;
        int i, j;

        while (scan.hasNext()) {

            n = scan.nextLong();
            if (n == 0) {
                break;
            }

            for (i = 0; i < n; i++) {
                //scanf("%lld",  & input[i]);
                input[i] = scan.nextLong();

                for (j = 0; j < i; j++) {

                    if (input[i] < input[j]) {

                        swp = input[i];
                        input[i] = input[j];
                        input[j] = swp;
                    }
                }
            }

            temp = input[0] + input[1];
            cost = temp;

            for (i = 2; i < n; i++) {
                temp += input[i];
                cost += temp;
            }
            System.out.println(cost);
        }
    }

}
