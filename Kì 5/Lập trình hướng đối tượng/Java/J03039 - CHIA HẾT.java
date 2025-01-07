import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;

public class J03039 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        BigInteger a = scanner.nextBigInteger();
        BigInteger b = scanner.nextBigInteger();
        BigInteger c = a.gcd(b);
        if (c.equals(b) || c.equals(a)){
            System.out.println("YES");
        }
        else System.out.println("NO");
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
