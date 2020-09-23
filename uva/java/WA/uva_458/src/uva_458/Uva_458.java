package uva_458;

import java.util.*;

public class Uva_458 {

    public static void main(String[] args) {
       
        Scanner scan = new Scanner(System.in);
        
        char c;
        String s;
        int i;
        
        while (scan.hasNext()) {
            
            s = scan.nextLine();
            
          char []  str = s.toCharArray();
            
            for ( i = 0; i < str.length; i++) {
                
                c = (char)((int)str[i] - 7);
                
                System.out.print(c);
                
            }
            System.out.println();
        }
    }

}
