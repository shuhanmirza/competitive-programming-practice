package uva_514;

import java.util.*;

public class Uva_514 {

    static int N, i, flg, n;
    static int tr[] = new int[1100];
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        
        while (scan.hasNext()) {
            N = scan.nextInt();
            if (N == 0) {
                break;
            }
            marshal();
            System.out.println();
        }

    }

    private static void marshal() {

        while (true) {

            for (i = 1; i <= N; i++) {
                
                tr[i] = scan.nextInt();
                //cin >> tr[i];
                if (tr[i] == 0) {
                    return;
                }
            }

            Stack st = new Stack();

            i = 1;
            n = 1;
            flg = 1;
            while (i <= N) {

                while (st.isEmpty() == true || (int)st.peek() != tr[i]) {
                    st.push(n);

                    n++;
                    if (n > N) {
                        break;
                    }
                }
//                if (st.peek() != new Integer(tr[i])) {
//
//                }

                st.pop();
                i++;
            }

            if (st.isEmpty()) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }

    }
}
