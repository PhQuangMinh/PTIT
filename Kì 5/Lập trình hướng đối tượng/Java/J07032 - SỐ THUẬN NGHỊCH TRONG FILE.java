import java.io.*;
import java.util.ArrayList;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

public class J07032 {
    static Scanner scanner = new Scanner(System.in);
    static boolean tn(int x){
        String s = Integer.toString(x);
        if (s.length()<2 || s.length()%2==0) return false;
        for (int i=0; i<s.length(); i++){
            if ((s.charAt(i)-'0')%2==0) return false;
        }
        for (int i=0; i<s.length()/2;i++){
            if (s.charAt(i)!=s.charAt(s.length()-i-1)) return false;
        }
        return true;
    }
    public static void solve() throws IOException, ClassNotFoundException {
        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream in2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> list1 = (ArrayList<Integer>) in1.readObject();
        ArrayList<Integer> list2 = (ArrayList<Integer>) in2.readObject();
        int[] a = new int[1000001];
        int[] b = new int[1000001];
        for (int x : list1) {
            if (tn(x))
                a[x]++;
        }
        for (int x : list2) {
            if (tn(x))
                b[x]++;
        }
        int cnt = 0;
        for (int i=0;i<=999999;i++) {
            if (a[i]>0 && b[i]>0){
                System.out.println(i + " " + (a[i]+b[i]));
                cnt++;
                if (cnt==10) return;
            }
        }
    }


    public static void main(String[] args) throws IOException, ClassNotFoundException {
        solve();
    }

}