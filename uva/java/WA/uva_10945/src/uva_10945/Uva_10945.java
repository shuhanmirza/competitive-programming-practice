/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_10945;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_10945 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        char c[] = new char[200], g;
        int a, i, j, k, l, ll, cnt;
        String st;

        while (scan.hasNext()) {
            st = scan.nextLine();

            char s[] = st.toCharArray();
            l = s.length;

            if (l == 4 && s[0] == 'D' && s[1] == 'O' && s[2] == 'N' && s[3] == 'E') {
                break;
            } else {
                c[0] = '\0';

                k = 0;
                cnt = 0;

                for (i = 0; i < l; i++) {
                    if (isalpha(s[i]) > 0) {
                        g = s[i];
                        g = tolower(g);

                        c[k] = g;
                        c[k + 1] = '\0';

                        k++;
                    }
                }

                ll = c.length;

                a = ll - 1;

                for (j = 0; j < ll; j++) {
                    if (c[j] == c[a]) {
                        cnt = cnt + 1;
                    }
                    a--;
                }

                if (cnt == ll) {
                    System.out.print("You won't be eaten!\n");
                } else {
                    System.out.print("Uh oh..\n");
                }
            }

        }
    }

    private static int isalpha(char c) {
        if (c <= 'a' && c >= 'z') {
            return 1;
        }
        if (c <= 'A' && c >= 'Z') {
            return 1;
        } else {
            return 0;
        }
    }

    private static char tolower(char g) {
        if (g <= 'A' && g >= 'Z') {
            return (char) (g + 32);
        } else {
            return g;
        }
    }

}
