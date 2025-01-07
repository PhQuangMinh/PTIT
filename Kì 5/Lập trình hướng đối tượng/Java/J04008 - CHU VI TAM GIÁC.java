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

public class J04008 {
    static Scanner scanner = new Scanner(System.in);

    public static boolean kt(double d1, double d2, double d3){
        return d1 + d2 > d3 && d1 + d3 > d2 && d2 + d3 > d1;
    }
    public static void solve(Scanner scanner) {
        Point p1 = new Point(scanner.nextDouble(), scanner.nextDouble());
        Point p2 = new Point(scanner.nextDouble(), scanner.nextDouble());
        Point p3 = new Point(scanner.nextDouble(), scanner.nextDouble());
        if (!kt(p1.distance(p2), p2.distance(p3), p3.distance(p1))){
            System.out.println("INVALID");
            return;
        }
        double area = p1.distance(p2) + p2.distance(p3) + p3.distance(p1);
        System.out.printf("%.3f\n", area);
    }
    public static void main(String[] args) throws FileNotFoundException {
        // Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
