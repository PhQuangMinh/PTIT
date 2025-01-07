import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

public class J02006 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        TreeSet<Integer> mp = new TreeSet<>();
        for (int i = 0; i < n; i++) {
            mp.add(scanner.nextInt());
        }
        for (int i = 0; i < m; i++) {
            mp.add(scanner.nextInt());
        }
        for (Integer x:mp) {
            System.out.printf("%d ", x);
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }
}
