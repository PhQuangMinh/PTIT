import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.TreeMap;

public class J03010 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        TreeMap<String, Integer> mp = new TreeMap<>();
        for (int i=0;i<n;i++) {
            String[] a = scanner.nextLine().toLowerCase().trim().split("\\s+");
            StringBuilder sb = new StringBuilder(a[a.length-1]);
            for (int j=0;j<a.length-1;j++) {
                sb.append(a[j].charAt(0));
            }
            String key = sb.toString();
            if (!mp.containsKey(key)) {
                mp.put(key, 2);
            } else {
                sb.append(mp.get(key));
                mp.put(key, mp.get(key)+1);
            }
            sb.append("@ptit.edu.vn");
            System.out.println(sb);
        }

    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
