/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_11530;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_11530 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        long flag[] = new long[30], ans, cas, T, len;
        int i;
        String input;

        //cin >> T;
        T = scan.nextLong();

        flag[0] = 1;
        flag[1] = 2;
        flag[2] = 3;
        flag[3] = 1;
        flag[4] = 2;
        flag[5] = 3;
        flag[6] = 1;
        flag[7] = 2;
        flag[8] = 3;
        flag[9] = 1;
        flag[10] = 2;
        flag[11] = 3;
        flag[12] = 1;
        flag[13] = 2;
        flag[14] = 3;
        flag[15] = 1;
        flag[16] = 2;
        flag[17] = 3;
        flag[18] = 4;
        flag[19] = 1;
        flag[20] = 2;
        flag[21] = 3;
        flag[22] = 1;
        flag[23] = 2;
        flag[24] = 3;
        flag[25] = 4;

        scan.nextLine();

        for (cas = 1; cas <= T; cas++) {
            input = scan.nextLine();

            ans = 0;

            len = input.length();

            for (i = 0; i < len; i++) {
                if (input.charAt(i) >= 'a' && input.charAt(i) <= 'z') {
                    ans += flag[input.charAt(i) - 'a'];
                } else {
                    ans++;
                }

                //cout << ans << "\n";
            }

            System.out.println("Case #" + cas + ": " + ans);

        }
    }

}
