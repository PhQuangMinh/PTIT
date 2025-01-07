import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.TreeMap;

public class J02007 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        int[] a = new int[n];
        TreeMap<Integer, Integer> mp = new TreeMap<>();
        for (int i=0;i<n;i++) {
            a[i] = scanner.nextInt();
            mp.put(a[i], mp.getOrDefault(a[i], 0) + 1);
        }
        for (int i=0;i<n;i++) {
            if (mp.get(a[i])>0){
                System.out.println(a[i] + " xuat hien " + mp.get(a[i]) + " lan");
                mp.put(a[i], 0);
            }
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        // Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            System.out.println("Test " + (i+1) + ":");
            solve(scanner);
        }
    }

}