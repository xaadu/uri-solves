import java.io.IOException;
import java.util.Scanner;

public class _1005 {
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        double x = scan.nextDouble();
        double y = scan.nextDouble();
        System.out.printf("MEDIA = %.5f\n", (((x*3.5)+(y*7.5))/11));
    }
}
