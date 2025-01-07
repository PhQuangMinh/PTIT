import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J03005 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        String s = scanner.nextLine().toLowerCase().trim();
        String[] a = s.split("\\s+");
        for (int i=1;i<a.length;i++) {
            StringBuilder sb = new StringBuilder(a[i]);
            sb.setCharAt(0, Character.toUpperCase(sb.charAt(0)));
            if (i<a.length-1) System.out.print(sb + " ");
            else System.out.print(sb + ", ");
        }
        System.out.println(a[0].toUpperCase());
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
