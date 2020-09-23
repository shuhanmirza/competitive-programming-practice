/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11593;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11593 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here

        int i, j, n, subtree = 0, countt = 0;
        
        Scanner s = new Scanner(System.in);

        while (s.hasNext()) {
            n = s.nextInt();
            if (n == 0) {
                break;
            }
            subtree = 0;
            subtree = n / 2;

            ++countt;
            System.out.print("Case ");
            System.out.print(countt);
            System.out.print(": ");
            System.out.println(subtree);
            //printf("Case %d: %d\n", countt, subtree);
        }
    }
    
}
