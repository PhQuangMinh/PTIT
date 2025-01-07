import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J03026 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        String a = scanner.nextLine();
        String b = scanner.nextLine();
        int n = a.length();
        int m = b.length();
        int ans = -1;
        for (int i=0;i<n;i++) {
            for (int j=i;j<=n;j++) {
                String tmp = a.substring(i, j);
                if (!b.contains(tmp)) {
                    ans = Math.max(ans, j-i);
                }
            }
        }
        for (int i=0;i<m;i++) {
            for (int j=i;j<=m;j++) {
                String tmp = b.substring(i, j);
                if (!a.contains(tmp)) {
                    ans = Math.max(ans, j-i);
                }
            }
        }
        System.out.println(ans);
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
