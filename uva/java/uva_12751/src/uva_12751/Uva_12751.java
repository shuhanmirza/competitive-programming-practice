/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_12751;

import java.util.*;
public class Uva_12751 {


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int N,K,X,i,sum,cas,T;
    //int marble[10005];
    /*
    for( i = 1 ; i <= 10000 ; i++)
    {
        marble[i] = i;
    }
    */
    T = scan.nextInt();

    for(cas = 1 ; cas <= T ; cas++)
    {
        N = scan.nextInt();
        K = scan.nextInt();
        X = scan.nextInt();
        //scanf("%d %d %d",&N,&K,&X);

        sum = 0;

        for(i = 1 ; i <= N; i++)
        {
            if( (i < X)  || ( i > (X+K-1) ) ) sum+=i;
        }

        System.out.println("Case "+ cas +": " +sum);
    }
       
    }
    
}
