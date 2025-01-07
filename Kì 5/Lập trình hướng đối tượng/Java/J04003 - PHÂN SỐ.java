import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J04003 {
    static Scanner scanner = new Scanner(System.in);
    public static long ucln(long a, long b) {
        long t = b%a;
        while (t != 0) {
            t = a%b;
            a = b;
            b = t;
        }
        return a;
    }
    public static void solve(Scanner scanner) {
        long tu = scanner.nextLong();
        long mau = scanner.nextLong();
        long gcd = ucln(tu, mau);
        System.out.print(tu/gcd + "/" + mau/gcd);
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
//        n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
