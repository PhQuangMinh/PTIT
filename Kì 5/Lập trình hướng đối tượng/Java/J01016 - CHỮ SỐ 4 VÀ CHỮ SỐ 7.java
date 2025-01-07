import java.util.Scanner;

public class J01016 {
    public static void solve(Scanner scanner) {
        String n = scanner.nextLine();
        int cnt = 0;
        for (int i = 0; i < n.length(); i++) {
            if (n.charAt(i)=='4' || n.charAt(i)=='7'){
                cnt++;
            }
        }
        if (cnt == 4 || cnt == 7) System.out.println("YES");
        else System.out.println("NO");
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }
}
