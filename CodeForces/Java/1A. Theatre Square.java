import java.util.Scanner;

/**
 *
 * @author Aniso
 */
public class Mavenproject1 {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        long n, m, a;
        n = in.nextLong();
        m = in.nextLong();
        a = in.nextLong();

        long x = (n + a - 1) / a;
        long y = (m + a - 1) / a;

        System.out.println(y * x);
    }
}
