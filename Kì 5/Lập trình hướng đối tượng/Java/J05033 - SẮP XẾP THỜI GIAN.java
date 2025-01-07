import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class tg implements Comparable<tg>{
    int h, p, g;
    tg(int h, int p, int g){
        this.h = h;
        this.p = p;
        this.g = g;
    }

    @Override
    public int compareTo(tg o) {
        if (h>o.h) return 1;
        if (h<o.h) return -1;
        if (p>o.p) return 1;
        if (p<o.p) return -1;
        return Integer.compare(g, o.g);
    }

    @Override
    public String toString() {
        return h + " " + p + " " + g;
    }
}
public class J05033 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        ArrayList<tg> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            list.add(new tg(scanner.nextInt(), scanner.nextInt(), scanner.nextInt()));
        }
        Collections.sort(list);
        for (tg t : list) {
            System.out.println(t);
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
