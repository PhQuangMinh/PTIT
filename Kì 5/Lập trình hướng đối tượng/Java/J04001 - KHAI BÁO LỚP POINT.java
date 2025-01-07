import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

class Point{
    double x, y;
    Point(){

    }

    Point(double x, double  y) {
        this.x = x;
        this.y = y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public double distance(Point o) {
        return Math.sqrt((x - o.getX())*(x - o.getX()) + (y - o.getY())*(y - o.getY()));
    }

    public String toString() {
        return "(" + x + ", " + y + ")";
    }
}
public class J04001 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        Point p1 = new Point(scanner.nextDouble(), scanner.nextDouble());
        Point p2 = new Point(scanner.nextDouble(), scanner.nextDouble());
        System.out.printf("%.4f\n", p1.distance(p2));
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
