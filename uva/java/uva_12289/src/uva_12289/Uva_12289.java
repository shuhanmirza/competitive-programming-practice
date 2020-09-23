/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_12289;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_12289 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        String input;
        int len, i, cas, T;

        //cin >> T;
        T = scan.nextInt();
        scan.nextLine();

        while (T-- > 0) {
            //cin >> input;
            
            input = scan.nextLine();

            len = input.length();

            if (len > 3) {
                System.out.println( "3");
            } else if ((input.charAt(0) == 't' && input.charAt(1) == 'w') || (input.charAt(0) == 't' && input.charAt(2) == 'o') || (input.charAt(2) == 'o' && input.charAt(1) == 'w')) {
                System.out.println("2");
            } else {
                System.out.println("1");
            }
        }
    }

}
