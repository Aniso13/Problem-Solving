
import java.util.Scanner;

/**
 *
 * @author Aniso
 */
public class Mavenproject1 {

    public static void main(String[] args) {

        
       Scanner in=new Scanner (System.in);
       int n=in.nextInt();
    int arr[]=new int[n];
    for(int i=0; i<n; i++)
        arr[i]=in.nextInt();
    boolean d=true;
    for(int i=0; i<n; i++)
    {

        double r= (double)arr[i]/2;
        if(arr[i]%2==0)
        {
            arr[i]/=2;
        }
        else
        {
            if(d)
            {
                arr[i]=(int) Math.ceil(r);
                d=false;
            }
            else
            {
                arr[i]=(int) Math.floor(r);
                d=true;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        System.out.println(arr[i]);
    }
    
       }
}

