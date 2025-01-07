import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J03021 {
    static Scanner scanner = new Scanner(System.in);

    public static boolean kt(String s){
        for (int i = 0; i < s.length()/2; i++){
            if (s.charAt(i) != s.charAt(s.length()-i-1)) return false;
        }
        return true;
    }

    public static int getNumber(char c){
        if (c=='A' || c=='B' || c=='C') return 2;
        if (c=='D' || c=='E' || c=='F') return 3;
        if (c=='G' || c=='H' || c=='I') return 4;
        if (c=='J' || c=='K' || c=='L') return 5;
        if (c=='M' || c=='N' || c=='O') return 6;
        if (c=='P' || c=='Q' || c=='R' || c=='S') return 7;
        if (c=='T' || c=='U' || c=='V') return 8;
        return 9;
    }
    public static void solve(Scanner scanner) {
        String s = scanner.nextLine().toUpperCase();
        StringBuilder ans = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            ans.append(getNumber(s.charAt(i)));
        }
        if (kt(ans.toString())) System.out.println("YES");
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
