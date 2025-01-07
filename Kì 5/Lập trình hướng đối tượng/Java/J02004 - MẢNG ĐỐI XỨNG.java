import java.util.Scanner;

public class J02004 {
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        int[] arr = new int[n+5];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        for (int i = 0; i < n/2; i++) {
            if (arr[i] != arr[n-i-1]) {
                System.out.println("NO");
                return;
            }
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