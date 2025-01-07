import java.util.Scanner;

public class J01024 {
    public static void solve(Scanner scanner) {
        String n = scanner.nextLine();
        for (int i = 0; i <n.length(); i++) {
            if (n.charAt(i) != '0' && n.charAt(i) != '1' && n.charAt(i) != '2'){
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