import java.util.Scanner;

class Solve{
    Solve() {
        fibo();
    }

    long[] f;
    void fibo(){
        f = new long[100];
        f[1] = 1;
        f[2] = 1;
        for(int i = 3; i < 93; i++){
            f[i] = f[i-1] + f[i-2];
        }
    }

    char cal(int n, long k){
        if (n==1) return '0';
        if (n==2) return '1';
        if (k<=f[n-2]) return cal(n-2, k);
        return cal(n-1, k-f[n-2]);
    }
}
public class J01022 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Solve solve = new Solve();
        int n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            int x = scanner.nextInt();
            long k = scanner.nextLong();
            System.out.println(solve.cal(x, k));
        }
    }
}
