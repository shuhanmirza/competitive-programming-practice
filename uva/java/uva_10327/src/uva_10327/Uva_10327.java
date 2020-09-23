/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_10327;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_10327 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);
    public static void main(String[] args) {
        // TODO code application logic here
        
        int i,j,number[] = new int[1005],N,ans,swap;

    while(scan.hasNext())
    {
        N = scan.nextInt();
        ans = 0;

        for( i = 0 ; i < N ; i++)
        {
            //scanf("%d",&number[i]);
            number[i] = scan.nextInt();
        }

              for(i = 0 ; i < ( N - 1 ); i++)
                  {
                    for(j = 0 ; j < N - i - 1; j++)
                        {
                            if (number[j] > number[j+1]) /* For decreasing order use < */
                            {
                                swap       = number[j];
                                number[j]   = number[j+1];
                                number[j+1] = swap;
                                ans ++;
                            }
                        }
                    }

                    System.out.println("Minimum exchange operations : "+ans);
    }
    }
    
}
