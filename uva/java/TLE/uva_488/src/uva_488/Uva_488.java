package uva_488;

import java.util.*;

public class Uva_488 {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        
        int lenth, height, a, i, j, k, test;
        test = scan.nextInt();

        for (a = 0; a < test; a++) {
            
            height = scan.nextInt();
            lenth = scan.nextInt();
            
                for (i = 0; i < lenth; i++) {
                    for (j = 1; j < height; j++) {
                        for (k = 1; k <= j; k++) {
                            System.out.print(j);
                        }
                        System.out.print("\n");
                    }
                    for (k = height - 1; j >= 1; j--) {
                        for (k = 1; k <= j; k++) {
                            System.out.print(j);
                        }
                        System.out.print("\n");
                    }

                    if (i != (lenth - 1)) {
                        System.out.print("\n");
                    }
                }
                if (a != (test - 1)) {
                    System.out.print("\n");
                }
            }
        }
    }


