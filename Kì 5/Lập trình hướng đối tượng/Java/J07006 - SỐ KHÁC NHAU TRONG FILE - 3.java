import java.io.*;
import java.util.ArrayList;
import java.util.Objects;
import java.util.Scanner;

public class J07006 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve() throws IOException, ClassNotFoundException {
        ObjectInputStream br = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<Integer> list = (ArrayList<Integer>) br.readObject();
        int[] a = new int[1000];
        for (Integer x:list){
            a[x]++;
        }
        for (int i=0;i<1000;i++){
            if (a[i]>0){
                System.out.println(i + " " + a[i]);
            }
        }
    }
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        solve();
    }

}