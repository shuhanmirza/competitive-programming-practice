package uva_272;

import java.util.*;

public class Uva_272 {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
         
        int p, l, i, flag;
        String in;
        flag = 0;

        while (scan.hasNext()) {
            
            in = scan.nextLine();
            
            p = 0;
            
            char []s = in.toCharArray();
            
            l = s.length;
            
            for (i = 0; i < l; i++) {
                if (s[i] == '"') {
                    if (flag == 0) {
                        System.out.print("``");
                        flag = 1;
                    } else {
                        System.out.print("''");
                        flag = 0;
                    }

                } else {
                    System.out.print(s[i]);
                }
            }
            System.out.print("\n");

        }

    }
}
