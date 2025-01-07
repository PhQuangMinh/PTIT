import java.util.Scanner;

public class J01009 {
    public static long solve(int n){
        long tong = 0;
        long d = 1;
        for (int i=1;i<=n;i++){
            d*=i;
            tong += d;
        }
        return tong;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine());
        System.out.println(solve(n));
    }
}
