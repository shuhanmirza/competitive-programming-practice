package uva_492;

import java.util.*;

public class Uva_492 {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        int i, j, k, flag_d, flag_w, flag_c, flag_v;

        flag_c = 0;
        flag_v = 0;
        flag_w = 0;
        flag_d = 0;

        char ch, save = '0';

        while (scan.hasNext()) {

            String s = scan.nextLine();

            char[] sod = s.toCharArray();
            int l = 0;

            while (l < sod.length) {
                
                ch = sod[l];
                l++;
                if (isalpha(ch)) {
                    if (flag_w == 1) {
                        System.out.print(ch);

                    } else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                        flag_w = 1;
                        flag_v = 1;
                        flag_c = 0;
                        System.out.print(ch);
                    } else if (isalpha(ch) == false) {
                        System.out.print(ch);
                    } else {
                        flag_w = 1;
                        flag_v = 0;
                        flag_c = 1;
                        save = ch;
                    }
                } else if (flag_w == 1) {
                    flag_w = 0;

                    if (flag_c == 1) {
                        flag_c = 0;
                        System.out.print(save);
                        System.out.print('a');
                        System.out.print('y');
                        //   if(flag_d == 1)
                        // {
                        //  System.out.print('.');
                        //    flag_d = 0;
                        //}
                        System.out.print(ch);

                    }
                    if (flag_v == 1) {
                        flag_v = 0;
                        //System.out.print(save);
                        System.out.print('a');
                        System.out.print('y');
                        //  if(flag_d == 1)
                        //{
                        // System.out.print('.');
                        //flag_d = 0;
                        // }
                        System.out.print(ch);
                    }
                } else {
                    System.out.print(ch);
                }

            }

        }
    }
    

    private static boolean isalpha(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return true;
        }
        if (ch >= 'a' && ch <= 'z') {
            return true;
        } else {
            return false;
        }
    }

}
