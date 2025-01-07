import java.io.*;
import java.util.ArrayList;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

public class J07030 {
    static Scanner scanner = new Scanner(System.in);
    static boolean snt(int x){
        if (x < 2) return false;
        for (int i = 2; i <= Math.sqrt(x); i++) {
            if (x % i == 0) return false;
        }
        return true;
    }
    public static void solve() throws IOException, ClassNotFoundException {
        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream in2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> list1 = (ArrayList<Integer>) in1.readObject();
        ArrayList<Integer> list2 = (ArrayList<Integer>) in2.readObject();
        int[] a = new int[1000000];
        int[] b = new int[1000000];
        for (int x : list1) {
            if (snt(x))
                a[x] = 1;
        }
        for (int x : list2) {
            if (snt(x))
                b[x] = 1;
        }
        for (int i=2;i<=500000;i++) {
            if (a[i]==1 && b[1000000-i]==1){
                System.out.println(i + " " + (1000000-i));
            }
        }
    }


    public static void main(String[] args) throws IOException, ClassNotFoundException {
        solve();
    }

}