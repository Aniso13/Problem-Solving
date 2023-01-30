import java.util.Scanner;

/**
 *
 * @author Aniso
 */
public class Mavenproject1 {
    public static void main(String[] args) {
        
    Scanner in =new Scanner(System.in); 
    long n=in.nextLong();
    long res=0;
    if(n%2==0)
        res=n/2;
    else
        res=(n/2)-n;
 
        System.out.println(res);
    }
}
