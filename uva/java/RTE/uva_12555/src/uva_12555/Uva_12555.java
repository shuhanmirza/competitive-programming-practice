/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package uva_12555;

/**
 *
 * @author DELL
 */
import java.util.*;
public class Uva_12555 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner scan = new Scanner(System.in);
        
            int T,cas;
    double ans,a,b;
    String st;

    //cin >> T;
    T = scan.nextInt();
    cas = 1;
    while(T-- > 0)
    {
        a = scan.nextDouble();
        st = scan.nextLine();
        //cin >> a >> st;

        b = 0;
        if(st.length() > 3) b = st.charAt(3) - '0';
        

            ans = (0.5*a) + (b*0.05);
            System.out.println("Case "+cas+": "+ans);

        cas++;
    }
    }
    
}
