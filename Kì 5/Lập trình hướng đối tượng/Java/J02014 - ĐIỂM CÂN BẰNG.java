import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J02014 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        int[] arr = new int[n+5];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        int tmp = 0;
        for (int i = 0; i < n; i++) {
            if (tmp == sum - tmp - arr[i] && i>0) {
                System.out.println(i+1);
                return;
            }
            tmp += arr[i];
        }
        System.out.println(-1);
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
