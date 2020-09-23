/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11677;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11677 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int hour = 60;
        int day = 1440;
        int h1, m1, h2, m2, i, j, k, l, m, n, sleep_h, sleep_m, final_sleep = 0, mod_h1, mod_h2, mod_m1, mod_m2, sleep_start, sleep_end;
        
        Scanner s = new Scanner(System.in);

        while (s.hasNext()) {
            
            h1 = s.nextInt();
            m1 = s.nextInt();
            h2 = s.nextInt();
            m2 = s.nextInt();
            
            if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) {
                break;
            }
            final_sleep = 0;

            if (h1 == 0) {
                h1 = 24;
            } else if (h2 == 0) {
                h2 = 24;
            }

            sleep_start = h1 * hour + m1;
            sleep_end = h2 * hour + m2;

            final_sleep = sleep_end - sleep_start;

            if (final_sleep >= 0) {
                System.out.println(final_sleep);
                //printf("%d\n", final_sleep);
            } else {
                System.out.println(final_sleep+day);
                
            }
        }

    }
    
}
