/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_10324;

import java.util.Scanner;

/**
 *
 * @author DELL
 */
public class Uva_10324 {

    /**
     * @param args the command line arguments
     */
    static Scanner scan = new Scanner(System.in);
    public static void main(String[] args) {
        // TODO code application logic here
        
        char check;
    int i,j,loop1,loop2,c,query,cas,ans = 0;

    cas = 1;
    String st;
    while(scan.hasNext())
    {
        st = scan.nextLine();
        
        char zero_one[] = st.toCharArray();
        
        if(zero_one[0] == '\0') break;

        //scanf("%d",&query);
        query = scan.nextInt();
        
        for( loop1 = 1; loop1 <= query ; loop1++)
          {
                //scanf("%d %d",&i,&j);
                i = scan.nextInt();
                j = scan.nextInt();
                scan.nextLine();

                if(i > j)
                {
                    c = i;
                    i = j;
                    j = c;
                }

                  check = zero_one[i];

                    for(loop2 = i ; loop2 <= j ; loop2++)
                    {
                        if( zero_one[loop2] == check ) ans = 1;
                          else
                          {
                              ans = 0 ;
                              break;
                          }
                    }

                    if(loop1 == 1) System.out.print ("Case "+cas+":\n");

                    if( ans == 1 ) System.out.print("Yes\n");
                        else System.out.print("No\n");
          }

          cas++;

    }
    }
    
}
