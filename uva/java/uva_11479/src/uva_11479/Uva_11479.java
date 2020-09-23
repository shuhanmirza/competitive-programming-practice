/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11479;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11479 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        int testcase, i;
        long a, b, c;

        //scanf("%d",&testcase);
        testcase = scan.nextInt();

        for (i = 1; i <= testcase; i++) {
            //scanf("%lld %lld %lld",&a,&b,&c);
            a = scan.nextLong();
            b = scan.nextLong();
            c = scan.nextLong();

            if (((a + b) > c) && ((b + c) > a) && ((c + a) > b)) {
                if ((a == b) && (b == c)) {
                    System.out.println("Case " + i + ": Equilateral");
                } else if ((a == b) || (a == c) || (b == c)) {
                    //printf("Case %d: Isosceles\n",i);
                    System.out.println("Case " + i + ": Isosceles");
                } else {
                    //printf("Case %d: Scalene\n",i);
                    System.out.println("Case " + i + ": Scalene");
                }
            } else {
                //printf("Case %d: Invalid\n",i);
                System.out.println("Case " + i + ": Invalid");
            }
        }
    }

}
