import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J02105 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        for (int i = 1; i <= n; i++) {
            System.out.print("List("+i+") = ");
            for (int j = 1; j <= n; j++) {
                int x = scanner.nextInt();
                if (x==1){
                    System.out.print(j + " ");
                }
            }
            System.out.println();
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
