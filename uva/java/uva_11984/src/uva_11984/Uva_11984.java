/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11984;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11984 {

    /**
     * @param args the command line arguments
     */
public static void main(String[] args) {
        // TODO code application logic here
        Scanner s = new Scanner(System.in);
        int test, cas;
        double f, c, d, res;
        while (s.hasNext()) 
        {
            test = s.nextInt();
            for (cas = 1; cas <= test; cas++)
            {
         
                c = s.nextFloat();
                d = s.nextFloat();
                f = ((9*c)/5)+d;
                res = (f*5)/9;
                System.out.print("Case ");
                System.out.print(cas);
                System.out.print(": ");
                System.out.printf("%.2f", res);
                System.out.println();
            }
        }
    }
    
}
