import java.io.IOException;
import java.util.Scanner;

public class _1006 {
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        double x = scan.nextDouble();
        double y = scan.nextDouble();
        double z = scan.nextDouble();
        System.out.printf("MEDIA = %.1f\n", ((x*2+y*3+z*5)/10));
    }
}
