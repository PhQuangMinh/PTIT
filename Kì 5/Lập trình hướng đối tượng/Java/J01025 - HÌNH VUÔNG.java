import java.util.Arrays;
import java.util.Scanner;

public class J01025 {
    public static void solve(Scanner scanner) {
        int[] x = new int[4];
        int[] y = new int[4];
        for (int i = 0; i < 4; i++) {
            x[i] = scanner.nextInt();
            y[i] = scanner.nextInt();
        }
        Arrays.sort(x);
        Arrays.sort(y);
        int min = Math.max(x[3] - x[0], y[3] - y[0]);
        System.out.println(min*min);
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }
}
