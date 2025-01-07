import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J03040 {
    static Scanner scanner = new Scanner(System.in);
    public static boolean kt(String s){
        if (s.charAt(5) < s.charAt(6) && s.charAt(6)<s.charAt(7) && s.charAt(7)<s.charAt(9) && s.charAt(9)<s.charAt(10)) return true;
        if (s.charAt(5) == s.charAt(6) && s.charAt(6) == s.charAt(7) && s.charAt(7) == s.charAt(9) && s.charAt(9) == s.charAt(10)) return true;
        if (s.charAt(5) == s.charAt(6) && s.charAt(6) == s.charAt(7) &&  s.charAt(9) == s.charAt(10)) return true;
        for (int i=5;i<=10;i++){
            if (i!=8 && s.charAt(i)!='6' && s.charAt(i)!='8') return false;
        }
        return true;
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
