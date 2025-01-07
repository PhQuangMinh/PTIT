import java.util.Scanner;

public class J01014 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine());
        for (int j = 0; j < n; j++) {
            long x = Long.parseLong(scanner.nextLine());
            long max = 0;
            for (int i = 2; (long) i *i<=x; i++) {
                if (x%i==0){
                    max = i;
                    while (x%i==0){
                        x /= i;
                    }
                }
            }
            if (x>1) System.out.println(x);
            else System.out.println(max);
        }
    }
}