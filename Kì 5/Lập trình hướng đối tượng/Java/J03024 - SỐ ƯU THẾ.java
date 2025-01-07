import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J03024 {
    static Scanner scanner = new Scanner(System.in);
    public static boolean isValid(String s){
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i)<'0' || s.charAt(i)>'9') return false;
        }
        return true;
    }
    public static void solve(Scanner scanner) {
        String s = scanner.nextLine();
        if (!isValid(s)){
            System.out.println("INVALID");
            return;
        }
        int cnt = 0;
        for (int i = 0; i < s.length(); i++) {
            int num = s.charAt(i) - '0';
            if (num % 2 == 0) cnt++;
        }
        if (s.length()%2==0 && cnt>s.length()-cnt || s.length()%2==1 && cnt<s.length()-cnt) System.out.println("YES");
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
