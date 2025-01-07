import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J04007 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        System.out.printf("00001 %s %s %s %s %s %s", scanner.nextLine(), scanner.nextLine(), scanner.nextLine(),
                scanner.nextLine(), scanner.nextLine(), scanner.nextLine());
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
