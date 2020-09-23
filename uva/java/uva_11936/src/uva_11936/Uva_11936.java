/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11936;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11936 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
         Scanner scan = new Scanner(System.in);
         
         int testcase,i;
    long a,b,c;

    //scanf("%d",&testcase);
    testcase = scan.nextInt();
    
    for(i = 1; i <= testcase ; i++)
    {
        //scanf("%lld %lld %lld",&a,&b,&c);
        a = scan.nextLong();
        b = scan.nextLong();
        c = scan.nextLong();
        
        if( ( (a+b) > c ) && ( (b+c) > a) && ( (c+a) > b ) )
        {
            System.out.println("OK");
        }

                else
                {
                   System.out.print("Wrong!!\n");
                }
    }
    }
    
}
