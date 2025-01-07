import java.util.Scanner;

public class J01004 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = Integer.parseInt(scanner.nextLine());
        for (int i=1;i<=t;i++) {
            int n = Integer.parseInt(scanner.nextLine());
            if (n<2){
                System.out.println("NO");
                continue;
            }
            boolean ok = true;
            for (int j=2;j*j<=n;j++) {
                if (n % j == 0) {
                    ok = false;
                    break;
                }
            }
            if (ok) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
