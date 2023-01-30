import java.util.Scanner;

/**
 *
 * @author Aniso
 */
public class Mavenproject1 {

    public static void main(String[] args) {

        int n=50;
       Scanner in=new Scanner (System.in);
       //int a;

	boolean prime[]=new boolean[n+1];
	for (int i = 0; i <= n; ++i)
        {
            if(i%2==0){prime[i] = false;}
            else {prime[i]=true;}
        }
	prime[0] = prime[1] = false;
	prime[2]=true;

	for (int i = 3; i*i <= n; i+=2)
        {
	if (prime[i] == false)continue;
            for (int j = i*i; j <= n; j += i+i)
                {
                    prime[j] = false;
                }
	}
        int a=in.nextInt();
        int b=in.nextInt();
        int c=0;
        for(int i=a+1;i<n;i++)
        {
            if(prime[i]){c=i;break;}
        }
        if(c==b)System.out.println("YES");
        else System.out.println("NO");
    }
}
