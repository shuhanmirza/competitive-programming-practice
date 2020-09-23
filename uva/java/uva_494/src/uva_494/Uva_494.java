package uva_494;

import java.util.*;

public class Uva_494 {

    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {

        int flag, i, j, k, l, count;
        String str;
        char ch;

        while (scan.hasNext()) {

            str = scan.nextLine();

            l = str.length();
            flag = 0;
            count = 0;

            for (i = 0; i < l; i++) {
                ch = str.charAt(i);
                if (flag == 0) {
                    if (isalpha(ch)) {
                        flag = 1;
                    }
                } else if (!isalpha(ch)) {
                    count++;
                    flag = 0;
                }
            }
            System.out.println(count);

        }

    }

    private static boolean isalpha(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return true;
        }
        if (ch >= 'a' && ch <= 'z') {
            return true;
        }
        return false;
    }
}
