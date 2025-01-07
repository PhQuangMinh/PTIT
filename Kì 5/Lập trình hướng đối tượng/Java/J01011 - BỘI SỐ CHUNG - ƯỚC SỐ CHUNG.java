import java.util.Scanner;
import java.lang.Math;

public class J01011 {
    public static int ucln(int a, int b) {
        int t = b%a;
        while (t!=0) {
            t = a%b;
            a = b;
            b = t;
        }
        return a;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine());
        for (int i=1;i<=n;i++) {
            int a = Integer.parseInt(scanner.next());
            int b = Integer.parseInt(scanner.next());
            System.out.printf("%d %d\n", (long)a*b/ucln(a, b), ucln(a, b)) ;
        }
    }
}
