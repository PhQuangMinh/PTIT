import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J02101 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        int[][] a = new int[n][n];
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                a[i][j] = scanner.nextInt();
            }
        }
        for (int i=0;i<n;i++) {
            if (i%2==0) {
                for (int j=0;j<n;j++) {
                    System.out.print(a[i][j] + " ");
                }
            } else {
                for (int j=n-1;j>=0;j--) {
                    System.out.print(a[i][j] + " ");
                }
            }
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            solve(scanner);
            System.out.println();
        }
    }

}
