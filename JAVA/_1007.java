import java.io.IOException;
import java.util.Scanner;

public class _1007 {
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();
        int d = scan.nextInt();
        System.out.println("DIFERENCA = " + (a*b - c*d));
    }
}
