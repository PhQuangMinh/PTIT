import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.text.ParseException;
import java.util.*;

public class Main {
    static Scanner scanner = new Scanner(System.in);
    static BigInteger mod = new BigInteger("11");

    public static void solve(Scanner scanner) throws FileNotFoundException {
        BigInteger a = scanner.nextBigInteger();
        if (a.mod(mod).equals(BigInteger.ZERO)){
            System.out.println(1);
        } else{
            System.out.println(0);
        }
    }
    public static void main(String[] args) throws FileNotFoundException{
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}