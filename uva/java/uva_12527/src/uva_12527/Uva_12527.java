/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_12527;

/**
 *
 * @author DELL
 */
import java.util.*;
public class Uva_12527 {

    /**
     * @param args the command line arguments
     */
    static boolean flag_num[] = new boolean[20],check;
    
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner scan = new Scanner(System.in);
        
            int N,M,cnt,i,j;


    while( scan.hasNext() )
    {
        //cin >> N >> M
        
        N = scan.nextInt();
        M = scan.nextInt();
        
        init_flag();
        cnt = 0;
        for( i = N ; i<= M ; i++)
        {
            j = i;
            init_flag();
            check = true;

             while( j > 0)
            {
               if( flag_num[j%10] == false)
               {
                   flag_num[j%10] = true;
               }
                    else
                    {
                        check = false;
                        break;
                    }

                j /= 10;
            }

            if( check == true) cnt++;
        }

        //cout << cnt << "\n";
        System.out.println(cnt);
    }
    }
    
    private static void init_flag()
{
    int i;

    for( i = 0 ; i < 10 ; i++)
    {
        flag_num[i] = false;
    }
}
    
}
