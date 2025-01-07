import java.util.Scanner;

public class J01017 {
    public static void solve(Scanner scanner) {
        String n = scanner.nextLine();
        for (int i=1;i<n.length();i++) {
            if (Math.abs(n.charAt(i)-n.charAt(i-1))!=1){
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }
}
