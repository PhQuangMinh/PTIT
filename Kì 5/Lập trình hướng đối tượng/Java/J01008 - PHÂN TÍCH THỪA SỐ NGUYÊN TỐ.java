import java.util.Scanner;

public class J01008 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = Integer.parseInt(scanner.nextLine());
        for (int i = 1; i <= t; i++) {
            int n = Integer.parseInt(scanner.nextLine());
            System.out.print("Test " + i + ": ");
            for (int j = 2; j * j <= n; j++) {
                if (n % j == 0) {
                    int d = 0;
                    while (n % j == 0) {
                        d++;
                        n /= j;
                    }
                    System.out.printf("%d(%d) ", j, d);
                }
            }
            if (n>1) {
                System.out.printf("%d(1)\n", n);
            }
            else{
                System.out.println();
            }
        }
    }
}
