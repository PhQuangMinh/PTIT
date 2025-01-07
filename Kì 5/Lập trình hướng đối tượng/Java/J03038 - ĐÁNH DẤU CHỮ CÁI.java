import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.TreeMap;

public class J03038 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        TreeMap<Character, Boolean> mp = new TreeMap<>();
        String s = scanner.nextLine();
        for (char c : s.toCharArray()) {
            mp.put(c,!mp.containsKey(c));
        }
        System.out.println(mp.size());
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
