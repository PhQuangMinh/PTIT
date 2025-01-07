import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J03032 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        String[] a = scanner.nextLine().split("\\s+");
        for (String s : a) {
            for (int j = s.length() - 1; j >= 0; j--) {
                System.out.print(s.charAt(j));
            }
            System.out.print(" ");
        }
        System.out.println();
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
