import java.util.*;

public class J02005 {
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int[] a = new int[n+5];
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }
        List<Integer> list = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            int x = scanner.nextInt();
            for (int j = 0; j < n; j++) {
                if (a[j]==x) {
                    boolean ok = true;
                    for (Integer y:list){
                        if (x == y){
                            ok = false;
                        }
                    }
                    if (ok) list.add(x);
                    break;
                }
            }
        }
        Collections.sort(list);
        for (int i = 0; i < list.size(); i++) {
            System.out.print(list.get(i));
            if (i!=list.size()-1) System.out.print(" ");
        }
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }
}