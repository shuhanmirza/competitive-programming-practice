
package uva_12578;
import java.util.*;
import java.lang.*;
import java.text.*;

public class Uva_12578 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
          Scanner scan = new Scanner(System.in);
          
              int T;
    double r,L,area,area_circle,pi,w;
    
    T = scan.nextInt();
    
    //scanf("%d",&T);
    pi = Math.acos(-1);

    while(T-- > 0)
    {
        L = scan.nextDouble();
        
        //scanf("%lf",&L);

        w = (L * 6) / 10;
        r = L/5;

        area = L * w;
        area_circle = pi * r*r;
     

        System.out.println(new DecimalFormat("##.##").format(area_circle) + " " + new DecimalFormat("##.##").format(area - area_circle) );
       
    }
    }
    
}
