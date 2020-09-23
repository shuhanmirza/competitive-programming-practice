package uva_673;

import java.util.*;

public class Uva_673 {

    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        int T, i, j, sz;
        String input;

        T = scan.nextInt();

        scan.nextLine();

        while (T-- > 0) {
            Stack par = new Stack();

            input = scan.nextLine();

            if (input.length() == 0) {
                System.out.print("Yes\n");
                continue;
            }

            if (par.size() == 1 || (par.size() % 2) != 0) {
                System.out.print("No\n");
                continue;
            }

            j = 0;
            for (i = 0; i < input.length(); i++) {
                if (input.charAt(i) == '(' || input.charAt(i) == '[') {
                    par.push(input.charAt(i));
                } else if (input.charAt(i) == ']' && !par.isEmpty() && (char) par.peek() == '[') {
                    par.pop();
                } else if (input.charAt(i) == ')' && !par.isEmpty() && (char) par.peek() == '(') {
                    par.pop();
                } else {
                    j = 1;
                }

            }

            if (par.empty() && j == 0) {
                System.out.print("Yes\n");
            } else {
                System.out.print("No\n");
            }

        }

    }
}
