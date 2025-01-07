import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

public class J07004 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        TreeMap<Integer, Integer> mp = new TreeMap<>();
        while (scanner.hasNext()) {
            int x = Integer.parseInt(scanner.next());
            mp.put(x, mp.getOrDefault(x, 0) + 1);
        }
        for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
            System.out.println(entry.getKey() + " " + entry.getValue());
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("DATA.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
