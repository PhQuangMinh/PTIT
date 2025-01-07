import java.util.Scanner;

public class J01026 {
    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        int k = (int)Math.sqrt(n);
        if (k*k!=n) {
            System.out.println("NO");
            return;
        }
        System.out.println("YES");
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }
}