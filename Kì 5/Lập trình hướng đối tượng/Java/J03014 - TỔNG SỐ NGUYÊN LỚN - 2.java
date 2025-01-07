import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.text.ParseException;
import java.util.*;

public class Main {
    static Scanner scanner = new Scanner(System.in);

    public static void solve(Scanner scanner) throws FileNotFoundException {
        BigInteger a = scanner.nextBigInteger();
        BigInteger b = scanner.nextBigInteger();
        System.out.println(a.add(b));
    }
    public static void main(String[] args) throws FileNotFoundException{
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}