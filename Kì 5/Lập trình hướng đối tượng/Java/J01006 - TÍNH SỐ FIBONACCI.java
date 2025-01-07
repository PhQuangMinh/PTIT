import java.util.Scanner;

public class J01006 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long[] f = new long[100];
        f[1] = 1;
        f[2] = 1;
        for (int i=3;i<=92;i++){
            f[i] = f[i-1] + f[i-2];
        }
        int t = Integer.parseInt(scanner.nextLine());
        for (int i=1;i<=t;i++){
            int n = Integer.parseInt(scanner.nextLine());
            System.out.println(f[n]);
        }
    }
}
