import java.util.Scanner;

public class J01012 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            int x = Integer.parseInt(scanner.nextLine());
            if (x==2){
                System.out.println(1);
                continue;
            }
            if (x%2==1){
                System.out.println(0);
                continue;
            }
            int count = 0;
            x /= 2;
            for (int j=1;j*j<=x;j++){
                if (x%j==0){
                    count++;
                    if (j*j!=x) count++;
                }
            }
            System.out.println(count);
        }
    }
}
