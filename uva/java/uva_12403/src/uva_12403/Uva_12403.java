/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_12403;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_12403 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here
        int a, b, i, T;
        int c = 0;
        String h;

        //scanf("%d",&a);
        a = scan.nextInt();
        scan.nextLine();
        for (i = 1; i <= a; i = i + 1) {
            //scanf("%s",&h)
            h = scan.nextLine();
            char ch[] = h.toCharArray();
            if (ch[0] == 'd') {
                h = h.replace("donate ","");
                b = new Integer(h);
                //System.out.println(h);
                c = c + b;
            } else {
                System.out.println(c);
            }
        }
    }

}
