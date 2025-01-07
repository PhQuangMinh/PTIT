import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J03007 {
    static Scanner scanner = new Scanner(System.in);
    public static boolean kt(String s){
        if (s.charAt(0)!='8' || s.charAt(s.length()-1)!='8') return false;
        for (int i = 0; i < s.length()/2; i++){
            if (s.charAt(i) != s.charAt(s.length()-i-1)) return false;
        }
        int sum = 0;
        for (int i = 0; i < s.length();i++){
            sum += Integer.parseInt(String.valueOf(s.charAt(i)));
        }
        return sum % 10 == 0;
    }
    public static void solve(Scanner scanner) {
        String s = scanner.nextLine();
        if (kt(s)) System.out.println("YES");
        else System.out.println("NO");
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
