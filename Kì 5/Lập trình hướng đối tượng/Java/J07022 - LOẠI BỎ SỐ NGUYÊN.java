import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.*;

public class J07022 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        ArrayList<String> list = new ArrayList<>();
        while (scanner.hasNext()){
            String[] a = scanner.nextLine().trim().split("\\s+");
            for (String s : a) {
                try{
                    int x = Integer.parseInt(s);
                }catch (Exception e){
                    list.add(s);
                }
            }
        }
        Collections.sort(list);
        for (String s : list) {
            System.out.print(s + " ");
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
