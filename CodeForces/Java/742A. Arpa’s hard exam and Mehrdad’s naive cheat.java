import java.util.Scanner;

/**
 *
 * @author Aniso
 */
public class Mavenproject1 {
    public static void main(String[] args) {
        
    Scanner in =new Scanner(System.in); 
    int n=in.nextInt();
    int res=0;
    if(n<4)
    {
        
        if(n==1)
            res=8;
        else if(n==2)
            res=4;
        else if(n==3)
            res=2;
        else if(n==0)
            res=1;
    }
    else
    {
        int ret=n%4;
        if(ret==0)
            res=6;
        else if(ret==3)
            res=2;
        else if(ret==2)
            res=4;
        else if(ret==1)
            res=8;
    }
 
        System.out.println(res);
    }
}
