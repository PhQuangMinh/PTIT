import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J02103 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt(), m = scanner.nextInt();
        int[][] a = new int[n][m];
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                a[i][j] = scanner.nextInt();
            }
        }
        int[][] c = new int[m][n];
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                c[j][i] = a[i][j];
            }
        }
        int[][] b = new int[n][n];
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                b[i][j] = 0;
                for (int k=0;k<m;k++) {
                    b[i][j] += a[i][k]*c[k][j];
                }
            }
        }
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                System.out.print(b[i][j] + " ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            System.out.print("Test " + (i+1) + ":\n");
            solve(scanner);
        }
    }

}