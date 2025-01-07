import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.TreeMap;

public class J02034 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        TreeMap<Integer, Boolean> mp = new TreeMap<>();
        int maxNum = 0;
        for (int i=1;i<=n;i++) {
            int x = scanner.nextInt();
            mp.put(x,!mp.containsKey(x));
            maxNum = Math.max(maxNum, x);
        }
        boolean ok = true;
        for (int i=1;i<=maxNum;i++) {
            if (!mp.containsKey(i)) {
                System.out.println(i);
                ok = false;
            }
        }
        if (ok){
            System.out.println("Excellent!");
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
//        n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
