import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J03025 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        String s = scanner.nextLine();
        int cnt = 0;
        for (int i = 0; i < s.length()/2; i++){
            if (s.charAt(i) != s.charAt(s.length()-i-1)) cnt++;
        }
        if (s.length()%2==0 && cnt==1 || s.length()%2==1 && cnt<=1) System.out.println("YES");
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
