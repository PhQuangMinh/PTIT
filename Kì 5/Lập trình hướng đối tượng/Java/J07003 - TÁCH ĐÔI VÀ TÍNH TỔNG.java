import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;

public class J07003 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        StringBuilder sb = new StringBuilder(scanner.nextLine());
        while (sb.length()>1){
            int n = sb.length();
            BigInteger a = new BigInteger(sb.substring(0, n/2));
            BigInteger b = new BigInteger(sb.substring(n/2));
            BigInteger c = a.add(b);
            sb.setLength(0);
            sb.append(c);
            System.out.println(sb);
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("DATA.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
