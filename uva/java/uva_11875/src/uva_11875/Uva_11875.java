/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11875;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11875 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);
    public static void main(String[] args) {
        // TODO code application logic here
        
            int i,T,cas,mid,n,player[] = new int[20],j,swp;

    //scanf("%d",&T);
    T = scan.nextInt();

    for( cas = 1 ; cas <= T ; cas++)
    {
        //scanf("%d",&n);
        n = scan.nextInt();

        for(i = 0 ; i < n ; i++ )
        {
            //scanf("%d",&player[i]);
            player[i] = scan.nextInt();

            for( j = 0 ; j < i ; j++ )
                {
                    if( player [i] < player [j])
                    {
                        swp = player[i];
                        player[i] = player[j];
                        player[j] = swp;
                    }
                }
        }

        System.out.println("Case "+cas+": "+player[n/2]);
    }
    }
    
}
