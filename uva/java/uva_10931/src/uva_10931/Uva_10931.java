package uva_10931;

import java.util.*;

public class Uva_10931 {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        long r, i, input, temp, count_1, j, len;


        while (scan.hasNext()) {
            
            input = scan.nextLong();
            if (input == 0) {
                break;
            }
            
        char s[] = new char[100];
        char ch[] = new char[100];

            i = 0;
            //  s[i]='/0';
            temp = input;
            count_1 = 0;

            while (temp != 0) {
                r = temp % 2;
                temp = temp / 2;

                if (r == 1) {
                    s[(int)i] = '1';

                    //  s[i+1]='\0';
                    i++;

                    count_1++;
                } else {
                    s[(int)i] = '0';

                    //s[i+1]='\0';
                    i++;
                }

            }
            s[(int)i] = '\0';
            len = i;

            for (i = 0, j = (len - 1); i < len; i++, j--) {
                ch[(int)i] = s[(int)j];
            }
            ch[(int)len] = '\0';
            
            String ko = new String(ch);
            ko = ko.trim();

            System.out.print("The parity of ");
            System.out.print(ko);
            System.out.print(" is ");
            System.out.print(count_1); 
            System.out.print(" (mod 2).\n");

        }

    }
}
