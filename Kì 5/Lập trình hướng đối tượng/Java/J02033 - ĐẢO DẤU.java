import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.*;

public class Main {
    static Scanner scanner = new Scanner(System.in);

    public static void solve(Scanner scanner) throws FileNotFoundException {
        int n = scanner.nextInt(), k = scanner.nextInt();
        int[] a = new int[n];
        int cntNe = 0, cnt0 = 0;
        for (int i=0;i<n;i++){
            a[i] = scanner.nextInt();
            if (a[i]<0) cntNe++;
            else if (a[i]==0) cnt0++;
        }
        Arrays.sort(a);
        long sum = 0;
        if (k<=cntNe){
            for (int i=0;i<cntNe;i++){
                if (i>=k) sum+=a[i];
                else sum-=a[i];
            }
            for (int i=cntNe;i<n;i++) sum+=a[i];
        } else{
            if (cnt0>0 || k==0){
                for (int i=0;i<n;i++)
                    sum += Math.abs(a[i]);
            } else{
                for (int i=0;i<cntNe;i++){
                    sum-=a[i];
                }
                for (int i=cntNe;i<n;i++){
                    sum+=a[i];
                }
                int cl = k-cntNe;
                if (cl%2==1){
                    sum -= Math.min(Math.abs(a[cntNe-1]), Math.abs(a[cntNe]))* 2L;
                }
            }
        }
        System.out.println(sum);
    }
    public static void main(String[] args) throws FileNotFoundException{
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}