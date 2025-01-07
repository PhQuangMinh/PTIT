import java.math.BigInteger;
import java.util.Scanner;

public class J02008 {
    static Scanner scanner = new Scanner(System.in);
    public static Long Gcd(int a, Long b) {
        BigInteger m = BigInteger.valueOf(a);
        BigInteger n = BigInteger.valueOf(b);
        return m.gcd(n).longValue();
    }
    public static void main(String[] args){
        int t = scanner.nextInt();
        for (int j = 0; j < t; j++) {
            int n = scanner.nextInt();
            Long s = 1L;
            for (int i = 1; i <= n; i++) {
                s = i * s / Gcd(i, s);
            }
            System.out.println(s);
        }
    }

}