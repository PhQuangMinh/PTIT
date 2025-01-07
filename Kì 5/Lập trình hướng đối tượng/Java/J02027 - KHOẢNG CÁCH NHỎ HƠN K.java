import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;

public class J02027 {
    static Scanner scanner = new Scanner(System.in);
    public static int lowerBound(int st, int ed, int[] a, int k){
        if (st>ed) return st;
        int mid = st + (ed-st)/2;
        if (a[mid]>=k) return lowerBound(st,mid-1,a,k);
        return lowerBound(mid+1,ed,a,k);
    }
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt(), k = scanner.nextInt();
        int[] a = new int[n];
        for (int i=0;i<n;i++) a[i] = scanner.nextInt();
        Arrays.sort(a);
        long ans = 0;
        for (int i=0;i<n-1;i++){
            int tmp = lowerBound(i+1, n-1, a, a[i]+k);
            ans += tmp - i - 1;
        }
        System.out.println(ans);
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}