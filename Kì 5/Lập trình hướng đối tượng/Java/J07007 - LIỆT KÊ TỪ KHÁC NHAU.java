import java.io.File;
import java.io.FileNotFoundException;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

public class J07007 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        TreeMap<String, Boolean> mp = new TreeMap<>();
        while (scanner.hasNext()){
            mp.put(scanner.next().toLowerCase(), true);
        }
        for (Map.Entry<String, Boolean> entry : mp.entrySet()) {
            System.out.println(entry.getKey());
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("VANBAN.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}