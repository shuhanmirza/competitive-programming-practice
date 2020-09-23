/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11185;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
class x {
    
    public static int[] terrn = new int[1000];
    public static int i;
    void ternary(int decimal) {
        i = 1;

        while (decimal != 0) {
            terrn[i] = decimal % 3;
            decimal /= 3;
            i++;
        }
    }
}
public class Uva_11185 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int n, k, j;
        
        
        //int binary[10000];
        Scanner s = new Scanner(System.in);
        
        x fun = new x();

        while (s.hasNext()) {
            n = s.nextInt();
            if (n < 0) {
                break;
            }
            if (n == 0) {
                System.out.print("0");
                //printf("0");
            }
            fun.ternary(n);

            for (j = fun.i - 1; j > 0; j--) {
                //printf("%d", terrn[j]);
                System.out.print(fun.terrn[j]);
            }
            System.out.println();
            //int binary[10000] = {0};
        }
    }
    
}
