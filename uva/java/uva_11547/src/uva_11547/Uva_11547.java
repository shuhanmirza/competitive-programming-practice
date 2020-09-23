/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11547;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11547 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);
    public static void main(String[] args) {
        // TODO code application logic here
        
        int testcase,i;
     long n;

    //scanf("%d",&testcase);
    testcase = scan.nextInt();

        for(i=1 ; i <= testcase ; i++ )
        {
            //scanf("%lld",&n)
            n = scan.nextLong();

             n = n * 567;
             n = n / 9;
             n = n + 7492;
             n = n * 235;
             n = n / 47;
             n = n - 498;

             n = n % 100;
             n = n / 10;

             if( n < 0) n = n * (-1) ;

            System.out.println(n);

        }
    }
    
}
