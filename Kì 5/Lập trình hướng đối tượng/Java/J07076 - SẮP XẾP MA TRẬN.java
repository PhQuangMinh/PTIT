import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;

public class J07076 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt(), m = scanner.nextInt(), k = scanner.nextInt();
        int[][] a = new int[m][n];
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++){
                a[j][i] = scanner.nextInt();
            }
        }
        Arrays.sort(a[k-1]);
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                System.out.print(a[j][i] + " ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("MATRIX.in"));
        int n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
