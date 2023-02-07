

import java.util.Scanner;

/**
 *
 * @author Aniso
 */
public class Mavenproject1 {

    public static void main(String[] args) {

        
       Scanner in=new Scanner (System.in);
       int n=in.nextInt();
	int c=0;
	while(n>0)
        {
            if(n%2==1)
               c++;
            n/=2;
        }
        System.out.println(c);
	}
    
    }


