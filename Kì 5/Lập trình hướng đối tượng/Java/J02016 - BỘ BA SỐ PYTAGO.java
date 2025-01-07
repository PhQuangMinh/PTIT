import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;

public class J02016 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        long[] arr = new long[n];
        for (int i = 0; i < n; i++) {
           long x = scanner.nextLong();
           arr[i] = x*x;
        }
        Arrays.sort(arr);
        for (int i=0;i<n-2;i++) {
            for (int j = i+1; j < n-1; j++) {
                long tmp = arr[i] + arr[j];
                if (Arrays.binarySearch(arr, j+1, n, tmp)>=j+1) {
                    System.out.println("YES");
                    return;
                }
            }
        }
        System.out.println("NO");
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