import java.io.*;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

public class J07005 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve() throws IOException {
        DataInputStream br = new DataInputStream(new FileInputStream("DATA.IN"));
        int[] a = new int[1000];
        for (int i = 0;i<100000;i++) {
            a[br.readInt()]++;
        }
        for (int i=0;i<1000;i++) {
            if (a[i]>0){
                System.out.println(i + " " + a[i]);
            }
        }
    }
    public static void main(String[] args) throws IOException {
        solve();
    }

}