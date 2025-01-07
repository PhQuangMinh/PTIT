import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J07008 {
    static Scanner scanner = new Scanner(System.in);
    static int n;
    static int[] a = new int[20];
    static int[] b = new int[20];
    static ArrayList<ArrayList<Integer>> list = new ArrayList<>();
    static void Try(int i){
        for (int j = 0; j <= 1; j++) {
            b[i] = j;
            if (i==n-1){
                ArrayList<Integer> l = new ArrayList<>();
                for (int k = 0; k < n; k++) {
                    if (b[k]==1){
                        l.add(a[k]);
                    }
                }
                boolean ok = true;
                for (int k=1; k < l.size(); k++){
                    if (l.get(k)<l.get(k-1)){
                        ok = false;
                        break;
                    }
                }
                if (ok && l.size()>1) list.add(l);
            } else Try(i+1);
        }
    }
    public static void solve(Scanner scanner) {
        n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }
        Try(0);
        ArrayList<String> ans = new ArrayList<>();
        for (ArrayList<Integer> a : list) {
            StringBuilder tmp = new StringBuilder();
            for (Integer x : a) {
                tmp.append(x).append(" ");
            }
            ans.add(String.valueOf(tmp));
        }
        Collections.sort(ans);
        for (String v:ans) {
            System.out.println(v);
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("DAYSO.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}