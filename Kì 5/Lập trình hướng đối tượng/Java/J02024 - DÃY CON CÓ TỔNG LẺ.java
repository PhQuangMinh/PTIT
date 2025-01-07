import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

public class J02024 {
    static Scanner scanner = new Scanner(System.in);
    static int[] vs = new int[15];
    static int[] arr = new int[15];
    static int n;
    static int kt(){
        int sum = 0;
        for (int j=0;j<n;j++){
            if (vs[j] == 1){
                sum += arr[j];
            }
        }
        if (sum%2==1) return 1;
        return 0;
    }

//    public static void np(int i){
//        for(int j = 0; j <= 1; j++){
//            vs[i] = j;
//            if(i == n - 1){
//                if(kt() == 1){
//                    for(int h = 0; h < n; h++) if(vs[h] == 1) System.out.print(arr[h] + " ");
//                    System.out.println();
//                }
//            }else np(i + 1);
//        }
//    }
    public static void np(int id){
        for (int j=0;j<=1;j++){
            vs[id] = j;
            if (id == n - 1) {
                if (kt()==1){
                    for (int h=0;h<n;h++) if (vs[h] == 1) System.out.print(arr[h] + " ");
                    System.out.println();
                }
            } else np(id + 1);
        }
    }
    public static void solve(Scanner scanner) {
        n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(arr[i] < arr[j]){
                    int m = arr[i];
                    arr[i] = arr[j];
                    arr[j] = m;
                }
            }
        }
        np(0);
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