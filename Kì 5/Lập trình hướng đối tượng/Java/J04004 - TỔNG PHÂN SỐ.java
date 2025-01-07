import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J04004 {
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
        long tu1 = scanner.nextLong();
        long mau1 = scanner.nextLong();
        long tu2 = scanner.nextLong();
        long mau2 = scanner.nextLong();
        long tu = tu1*mau2 + tu2*mau1;
        long mau = mau1*mau2;
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
