import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J04002 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        double x = scanner.nextDouble();
        double y = scanner.nextDouble();
        String s = scanner.next().toLowerCase();
        if (x<=0 || y<=0 || x != Math.round(x) || y != Math.round(y)){
            System.out.println("INVALID");
            return;
        }
        System.out.print(Math.round((x+y)*2) + " " + Math.round((x*y)) + " " + Character.toUpperCase(s.charAt(0)) + s.substring(1));
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
//        n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}