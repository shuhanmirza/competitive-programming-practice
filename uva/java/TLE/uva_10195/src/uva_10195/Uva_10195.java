/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_10195;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_10195 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        long i, n, T;

        T = scan.nextLong();
        for (i = 1; i <= T; i++) {
            n = scan.nextLong();

            if (count_happy(n) == 1) {
                System.out.print("Case #" + i + ": " + n + " is a Happy number.\n");
            } else {
                //printf("Case #%lld: %lld is an Unhappy number.\n",i,n);
                System.out.print("Case #" + i + ": " + n + " is an Unhappy number.\n");
            }
        }
    }

    private static long count_happy(long n) {
        char ch[] = new char[50];
        int sum, len;
        int i, j;

        if (n < 10) {
            n = n * n;
        }

        sum = (int) n;
        while (sum > 9) {
            j = sum;
            i = 0;
            while (j > 0) {
                ch[i] = (char) (j % 10 + '0');

                j /= 10;
                i++;
            }
            ch[i] = '\0';

            len = ch.length;

            sum = 0;
            for (i = 0; i < len; i++) {
                sum += (ch[i] - '0') * (ch[i] - '0');
            }
        }

        return sum;
    }

}
