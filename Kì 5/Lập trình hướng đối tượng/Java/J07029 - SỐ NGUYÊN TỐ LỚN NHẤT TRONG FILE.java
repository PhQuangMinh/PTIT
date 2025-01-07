import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;

public class J07029 {
    static Scanner scanner = new Scanner(System.in);
    static boolean snt(int x){
        for (int i=2;i*i<=x;i++){
            if (x % i == 0) return false;
        }
        return x>1;
    }
    public static void solve() throws IOException, ClassNotFoundException {
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<Integer> list = (ArrayList<Integer>) in.readObject();
        int[] a = new int[1000001];
        for (Integer i:list){
            if (snt(i)){
                a[i]++;
            }
        }
        int cnt = 0;
        for (int i=999999;i>=2;i--){
            if (a[i]>0){
                System.out.println(i + " " + a[i]);
                cnt++;
                if (cnt>=10) return;
            }
        }

    }
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve();
        }
    }

}