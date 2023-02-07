import java.util.Scanner;

/**
 *
 * @author Aniso
 */
public class Mavenproject1 {

    public static void main(String[] args) {

        
       Scanner in=new Scanner (System.in);
       int n,m;
    n=in.nextInt();
    m=in.nextInt();
    n=2*n+1;
    int arr[]=new int[n];
    for(int i=0;i<n;i++)
        arr[i]=in.nextInt();

    for(int i=1;i<n;i++)
    {
        if(arr[i]>(arr[i-1]+1)&&arr[i]>(arr[i+1]+1))
        {
            arr[i]-=1;
            m--;
        }
        if(m==0)
            break;
    }
    for(int i=0;i<n;i++)
        System.out.print(arr[i]+" ");
    }}
