import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Map;
import java.util.TreeMap;

public class J07015 {
    static boolean snt(Integer x){
        for (int i=2;i*i<=x;i++){
            if (x%i==0) return false;
        }
        return x>1;
    }
    public static void solve() throws IOException, ClassNotFoundException {
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("SONGUYEN.in"));
        ArrayList<Integer> list = (ArrayList<Integer>) in.readObject();
        TreeMap<Integer, Integer> mp = new TreeMap<>();
        int[] a = new int[10000];
        for (Integer i:list){
            if (snt(i)){
                a[i]++;
            }
        }
        for (int i=1;i<10000;i++) {
            if (a[i]>0){
                System.out.print(i + " " + a[i] + "\n");
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