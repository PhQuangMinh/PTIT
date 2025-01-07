import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

public class J03009 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        String[] a = scanner.nextLine().trim().split("\\s+");
        String[] b = scanner.nextLine().trim().split("\\s+");
        ArrayList<String> list = new ArrayList<>();
        TreeMap<String, Boolean> mp = new TreeMap<>();
        for (String s : a) {
            int ok = 1;
            for (String t : b) {
                if (s.equals(t)) {
                    ok = 0;
                    break;
                }
            }
            if (ok == 1 && !mp.containsKey(s)){
                list.add(s);
                mp.put(s, true);
            }
        }
        Collections.sort(list);
        for (String s : list) {
            System.out.print(s + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
