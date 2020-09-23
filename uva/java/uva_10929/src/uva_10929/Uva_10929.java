/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_10929;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_10929 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        String in;
        int i, remainder, lenght;

        while (true) {
            in = scan.nextLine();
            if(in.isEmpty()) continue;
            char number[] = in.toCharArray();

            remainder = 0;
            lenght = number.length;

            if (number[0] == '0' && lenght == 1) {
                break;
            }

            for (i = 0; i < lenght; i++) {
                remainder = (remainder * 10) + (number[i] - '0');

                remainder = remainder % 11;
            }

            if (remainder == 0) {
                System.out.print(number);
                System.out.print(" is a multiple of 11.\n");
            } else {
                System.out.print(number);
                System.out.print(" is not a multiple of 11.\n");
            }
        }
    }

}
