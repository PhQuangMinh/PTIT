import java.io.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;
import java.util.TreeMap;

public class J07040 {
    public static void solve() throws IOException, ClassNotFoundException {
        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("NHIPHAN.in"));
        ArrayList<String> list1 = (ArrayList<String>) in1.readObject();
        TreeMap<String, Boolean> mp = new TreeMap<>();
        for (String x : list1) {
            String[] a = x.toLowerCase().trim().split("\\s+");
            for (String b:a){
                mp.put(b, true);
            }
        }
        Scanner scanner = new Scanner(new File("VANBAN.in"));
        while (scanner.hasNext()){
            String[] a = scanner.nextLine().toLowerCase().trim().split("\\s+");
            for (String x:a){
                if (mp.containsKey(x)){
                    System.out.println(x);
                    mp.remove(x);
                }
            }
        }
    }


    public static void main(String[] args) throws IOException, ClassNotFoundException {
        solve();
    }

}