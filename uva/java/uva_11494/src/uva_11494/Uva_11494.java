/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11494;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11494 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        int X_1, Y_1, X_2, Y_2, i, dif_X, dif_Y;

        while (true) {
            //scanf("%d %d %d %d",&X_1,&Y_1,&X_2,&Y_2);
            X_1 = scan.nextInt();
            Y_1 = scan.nextInt();
            X_2 = scan.nextInt();
            Y_2 = scan.nextInt();

            if ((X_1 + Y_1 + X_2 + Y_2) < 4) {
                break;
            } else {
                dif_X = X_1 - X_2;
                if (dif_X < 0) {
                    dif_X = (-1) * dif_X;
                }

                dif_Y = Y_1 - Y_2;
                if (dif_Y < 0) {
                    dif_Y = (-1) * dif_Y;
                }

                if (X_1 == X_2 && Y_1 == Y_2) {
                    System.out.print("0\n");
                } else if (X_1 == X_2 || Y_1 == Y_2) {
                    System.out.print("1\n");
                } else if (dif_X == dif_Y) {
                    System.out.print("1\n");
                } else {
                    System.out.print("2\n");
                }
            }
        }
    }

}
