import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J02106 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            int cnt1 = 0, cnt0 = 0;
            for (int j = 1; j <= 3; j++) {
                int x = scanner.nextInt();
                if (x==1){
                    cnt1++;
                } else cnt0++;
            }
            if (cnt1>cnt0) cnt++;
        }
        System.out.println(cnt);
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