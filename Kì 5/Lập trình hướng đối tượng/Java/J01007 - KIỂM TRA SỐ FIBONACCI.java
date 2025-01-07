import java.util.Scanner;

public class J01007 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long[] f = new long[100];
        f[0] = 0;
        f[1] = 1;
        f[2] = 1;
        for (int i = 3; i <= 92; i++) {
            f[i] = f[i - 1] + f[i - 2];
        }
        int t = Integer.parseInt(scanner.nextLine());
        for (int i = 1; i <= t; i++) {
            long n = Long.parseLong(scanner.nextLine());
            boolean ok = false;
            for (int j = 0; j <= 92; j++) {
                if (f[j] == n) {
                    ok = true;
                    break;
                }
            }
            if (ok) System.out.print("YES");
            else System.out.print("NO");
            if (i!=t) System.out.println();;
        }
    }
}