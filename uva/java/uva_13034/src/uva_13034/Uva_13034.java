/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_13034;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_13034 {

    /**
     * @param args the command line arguments
     */
public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner s = new Scanner(System.in);

        int test, n;
        boolean flag;
   
        test = s.nextInt();
      

        for (int i = 1; i <= test; i++) {
            flag = true;
            for (int j = 0; j < 13; j++) {
                n = s.nextInt();

                if (n == 0) {
                    flag = false;
                }
            }
               System.out.printf("Set #%d: ", i);
            
            if (flag) {
                System.out.println("Yes");
                
            } else {
                System.out.println("No");
                
            }
        }

    }
    
}
