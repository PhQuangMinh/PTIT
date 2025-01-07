import java.util.Scanner;

public class J01021 {
    public static long lt(long x, long y, int mod){
        if (y==0) return 1;
        long t = lt(x, y/2, mod)%mod;
        if (y%2==0){
            return t*t%mod;
        }
        return (t*t%mod)*x%mod;
    }
    public static void solve(long x, long y, int mod) {
        System.out.println(lt(x, y, mod));
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int mod = 1000000007;
        while (true){
            long x = scanner.nextLong();
            long y = scanner.nextLong();
            if (x == 0 && y == 0) break;
            solve(x, y, mod);
        }
    }
}
