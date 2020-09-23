/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_12577;

/**
 *
 * @author DELL
 */
import java.util.*;
public class Uva_12577 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner scan = new Scanner(System.in);
        
            long i;
    
String in;
    i=1;
    while(true)
    {
        in = scan.nextLine();
                
        char input [] = in.toCharArray();

        if( input[0] == '*' )
        {
            break;
        }
            else if(input[0] == 'H')
            {
                System.out.println("Case "+i+": Hajj-e-Akbar");
                i++;
            }
                else
                {
                    System.out.println("Case "+i+": Hajj-e-Asghar");
                    i++;
                }
    }

    }
    
}
