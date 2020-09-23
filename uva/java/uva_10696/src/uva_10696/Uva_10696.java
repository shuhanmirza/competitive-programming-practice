/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_10696;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_10696 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here
        long X, ans;

        while (scan.hasNext()) {
            X = scan.nextLong();
            if (X == 0) {
                break;
            }

            ans = f91(X);
            System.out.println("f91(" + X + ") = " + ans);
        }
    }

    private static long f91(long X) {
        if (X >= 101) {
            X = X - 10;

            return X;
        } else {
            X = f91(f91(X + 11));

            return X;
        }
    }
}
