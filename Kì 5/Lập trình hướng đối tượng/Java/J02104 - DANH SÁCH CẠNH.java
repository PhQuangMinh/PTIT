import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J02104 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int x = scanner.nextInt();
                if (x==1 && i<=j){
                    System.out.print("(" + i + "," + j + ")\n");
                }
            }
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
