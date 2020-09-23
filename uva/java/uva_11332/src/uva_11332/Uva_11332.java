/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11332;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11332 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);
    public static void main(String[] args) {
        // TODO code application logic here
        
     long input,ans;

    while(scan.hasNext())
    {
        input = scan.nextLong();
        if(input == 0) break;

         ans = input % 9;

         if(ans == 0) ans = 9;

         System.out.println(ans);
    }
    }
    
}
