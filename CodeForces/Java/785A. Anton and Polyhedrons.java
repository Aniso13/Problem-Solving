import java.util.Scanner;

/**
 *
 * @author Aniso
 */
public class Mavenproject1 {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long r = 0;
        for(int i=0;i<n;i++) {
           String s= in.next();
            if (s.equals("Tetrahedron")) {
                r += 4;
            } else if (s.equals("Cube") ) {
                r += 6;
            } else if (s.equals("Octahedron")) {
                r += 8;
            } else if (s.equals("Dodecahedron")) {
                r += 12;
            } else if (s.equals("Icosahedron") ) {
                r += 20;
            }
        }
        System.out.println(r);
    }
}
