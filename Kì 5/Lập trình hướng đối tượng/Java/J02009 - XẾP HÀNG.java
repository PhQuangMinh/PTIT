import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class Guest implements Comparable<Guest> {
    int t, d;
    public Guest(int t, int d) {
        this.t = t;
        this.d = d;
    }

    @Override
    public int compareTo(Guest o) {
        if (this.t < o.t || this.t==o.t && this.d<o.d) return -1;
        if (this.equals(o)) return 0;
        return 1;
    }
}
public class J02009 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        ArrayList<Guest> list = new ArrayList<>();
        for (int i = 0; i < n; i++){
            list.add(new Guest(scanner.nextInt(), scanner.nextInt()));
        }
        Collections.sort(list);
        int ans = 0;
        for (Guest guest : list){
            if (guest.t<=ans) ans = ans + guest.d;
            else{
                ans = guest.t + guest.d;
            }
//            System.out.println(ans);
        }
        System.out.println(ans);
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
