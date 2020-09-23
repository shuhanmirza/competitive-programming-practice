/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11388;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11388 {

    /**
     * @param args the command line arguments
     */
public static void main(String[] args) {
        // TODO code application logic here
        int i, j, test, gcd, lcm;
        
        Scanner s = new Scanner(System.in);
        
        test = s.nextInt();

        for (i = 1; i <= test; i++) {
            
            gcd = s.nextInt();
            lcm = s.nextInt();
            
            if (lcm % gcd == 0) {
                System.out.print(gcd);
                System.out.print(" ");
                System.out.println(lcm);
                
            }
            else {
                System.out.println("-1");
            }
        }
    }

    
}
