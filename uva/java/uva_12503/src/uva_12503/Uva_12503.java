package uva_12503;

import java.util.Scanner;

public class Uva_12503 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        // TODO code application logic here

        int ans, T, n, ins[] = new int[1000], i, temp;
        String st;
        //cin >> T;
        T = scan.nextInt();

        while (T-- > 0) {
            n = scan.nextInt();

            scan.nextLine();

            ans = 0;
            for (i = 1; i <= n; i++) {
                st = scan.nextLine();

                if (st.charAt(0) == 'L') {
                    ans--;
                    ins[i] = -1;
                }
                if (st.charAt(0) == 'R') {
                    ans++;
                    ins[i] = 1;
                }
                if (st.charAt(0) == 'S') {
                    st = scan.nextLine();
                    st = st.replace("SAME AS ","");
                    temp = new Integer(st);
                     System.out.println(2);
                    ans += ins[temp];
                    ins[i] = ins[temp];
                }
                    
                System.out.println(ans);
            }
            System.out.println(ans);
        }
    }

}
