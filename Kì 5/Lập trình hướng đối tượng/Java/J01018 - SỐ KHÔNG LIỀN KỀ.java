import java.util.Scanner;

public class J01018 {
    public static void solve(Scanner scanner) {
        String n = scanner.nextLine();
        int sum = n.charAt(0) - '0';
        for (int i=1;i<n.length();i++) {
            sum += n.charAt(i) - '0';
            if (Math.abs(n.charAt(i)-n.charAt(i-1))!=2){
                System.out.println("NO");
                return;
            }
        }
        if (sum%10!=0) {
            System.out.println("NO");
        }
        else System.out.println("YES");
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }
}
//3
//1353
//246864
//123435