package uva_483;

import java.util.*;

public class Uva_483 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int start, last, len, i, j;
        String input;

        while (scan.hasNext()) {
            
            input = scan.nextLine();

            len = input.length();
            char st[] = input.toCharArray();

            start = 0;
            for (i = 0; i < len; i++) {
                if (st[i] == ' ') {
                    word(start, i - 1,input);
                    start = i + 1;
                    System.out.print(" ");
                }

                if (i == (len - 1)) {
                    word(start, i,input);
                    System.out.println();
                }
            }
        }
    }

    private static void word(int strt, int lst, String in) {
        char input[] = in.toCharArray();

        for (int i = lst; i >= strt; i--) {
            System.out.print(input[i]);
        }
    }
}
