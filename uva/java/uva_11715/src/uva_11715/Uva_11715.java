/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11715;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11715 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        double u, v, t, s, a, x, y, z;
        int num, cas = 1;
        
        Scanner sc = new Scanner(System.in);

        while (sc.hasNext()) {
            
            
            num = sc.nextInt();
            if(num == 0) break;
            if (num == 0) {
                break;
            } else if (num == 1) {
                
                x = sc.nextFloat();
                y = sc.nextFloat();
                z = sc.nextFloat();
                u = x;
                v = y;
                t = z;

                double acc = (v - u) / t;
                double dis = (u * t) + 0.5 * (acc * t * t);
                
                //printf("Case %d: %.3lf %.3lf", cas, dis, acc);
                
                System.out.print("Case ");
                System.out.print(cas);
                System.out.print(": ");
                System.out.printf("%.3f",dis);
                System.out.print(" ");
                System.out.printf("%.3f",acc);
                System.out.println();

            } else if (num == 2) {
                
                x = sc.nextFloat();
                y = sc.nextFloat();
                z = sc.nextFloat();
                u = x;
                v = y;
                a = z;

                double tim = (v - u) / a;
                double dis = (u * tim) + 0.5 * (a * tim * tim);

                System.out.print("Case ");
                System.out.print(cas);
                System.out.print(": ");
                System.out.printf("%.3f",dis);
                System.out.print(" ");
                System.out.printf("%.3f",tim);
                System.out.println();

            } else if (num == 3) {
                x = sc.nextFloat();
                y = sc.nextFloat();
                z = sc.nextFloat();
                u = x; // 5 1 6
                a = y;
                s = z;
                
                double init = u * u + 2 * a * s;
                double vel = Math.pow(init, 0.5);
                double tim = z / ((x + vel) / 2.0);
                
                System.out.print("Case ");
                System.out.print(cas);
                System.out.print(": ");
                System.out.printf("%.3f", vel);
                System.out.print(" ");
                System.out.printf("%.3f", tim);
                System.out.println();
            } else if (num == 4) {
                x = sc.nextFloat();
                y = sc.nextFloat();
                z = sc.nextFloat();
                v = x;
                a = y;
                s = z;
                
                double ini = v * v - 2 * a * s;
                double ager = Math.pow(ini, 0.5);
                // double tim = (v - ager)/a;
                double tim = s / ((ager + v) / 2.0);
                
                System.out.print("Case ");
                System.out.print(cas);
                System.out.print(": ");
                System.out.printf("%.3f",ager);
                System.out.print(" ");
                System.out.printf("%.3f",tim);
                System.out.println();
            }
            cas++;
        }
    }
    
}
