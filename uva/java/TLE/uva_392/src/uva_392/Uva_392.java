package uva_392;

import java.util.*;

public class Uva_392 {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        int[] a = new int[10];
        int count, i;

        while (scan.hasNext()) {

            a[8] = scan.nextInt();
            a[7] = scan.nextInt();
            a[6] = scan.nextInt();
            a[5] = scan.nextInt();
            a[4] = scan.nextInt();
            a[3] = scan.nextInt();
            a[2] = scan.nextInt();
            a[1] = scan.nextInt();
            a[0] = scan.nextInt();

            count = 0;

            for (i = 8; i >= 0; i--) {
                if (i == 0 && a[i] == 0 && count == 0) {
                    System.out.print(a[i]);
                }
                if (a[i] != 0) /*zero borjon kora holo*/ {
                    if (i == 0) {
                        if (count != 0) {
                            if (a[i] < 0) {
                                a[i] = -a[i];

                                System.out.print(" - ");
                                System.out.print(a[i]);
                            } else {
                                System.out.print(" + ");
                                System.out.print(a[i]);

                            }
                        } else {
                            System.out.print(a[i]);
                            count++;
                        }
                        continue;
                    }
                    if (i == 1) /*x^1=x*/ {
                        if (count != 0) /*jokhon ei print ta pothom print noe*/ {
                            if (a[i] == 1) {
                                System.out.print(" + x");
                                /* x * 1 = x*/
                            }

                            if (a[i] > 1) {
                                System.out.print(String.format(" + %dx", a[i]));
                            }

                            if (a[i] == -1) {
                                System.out.print(" - x");
                                /* x * -1 = -x  */
                            }

                            if (a[i] < -1) {
                                a[i] = -a[i];
                                System.out.print(String.format(" - %dx", a[i]));
                            }

                        } else {
                            if (a[i] == 1) {
                                System.out.print(String.format("x"));
                                /* 1st print */
                                count++;
                            }

                            if (a[i] > 1) {
                                System.out.print(String.format("%dx", a[i]));
                                //printf("%dx", a[i]);
                                /* 1st print */
                                count++;
                            }

                            if (a[i] == -1) {
                                System.out.print(String.format("-x"));

                                                                //printf("-x");
                                /* x * -1 = -x  */
                                count++;
                            }

                            if (a[i] < -1) {
                                System.out.print(String.format("%dx", a[i]));
                                    //printf("%dx", a[i]);
                                /* x * -1 = -x  */

                                count++;
                            }

                        }
                        continue;
                    }
                    if (a[i] > 0) /* for positive number*/ {
                        if (count != 0) /*jokhon ei print ta pothom print noe*/ {
                            if (a[i] == 1) {
                                System.out.print(String.format(" + x^%dx",i));
                               // printf(" + x^%d", i);
                                /* x * 1 = x*/
                            } else {
                                System.out.print(String.format(" + %dx^%d", a[i],i));
                               // printf(" + %dx^%d", a[i], i);
                            }

                        } else if (a[i] == 1) {
                            System.out.print(String.format("x^%d",i));
                            //printf("x^%d", i);
                            /* 1st print */
                            count++;
                        } else {
                            System.out.print(String.format("%dx^%d", a[i], i));
                            //printf("%dx^%d", a[i], i);
                            /* 1st print */
                            count++;
                        }
                    } else /* for negitive number*/ if (count != 0) /*jokhon ei print ta pothom print noe*/ {
                        if (a[i] == -1) {
                            System.out.print(String.format(" - x^%d", i));
                            //printf(" - x^%d", i);
                            /* x * -1 = -x  */
                        } else {
                            a[i] = -a[i];
                            System.out.print(String.format(" - %dx^%d", a[i], i));
                            //printf(" - %dx^%d", a[i], i);
                        }

                    } else /* 1st print */ if (a[i] == -1) {
                        System.out.print(String.format("-x^%d", i));
                        //printf("-x^%d", i);
                        count++;
                    } else {
                        System.out.print(String.format("%dx^%d", a[i], i));
                       // printf("%dx^%d", a[i], i);
                        count++;
                    }
                }
            }
            System.out.println();
        }
    }

}
