import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

class Matrix{
    int[][] matrix;
    int n, m;
    public Matrix(int n, int m) {
        matrix = new int[n][m];
        this.n = n;
        this.m = m;
    }

    public void nextMatrix(Scanner sc) {
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                matrix[i][j] = sc.nextInt();
            }
        }
    }

    public int[][] getMatrix() {
        return matrix;
    }

    public int getN() {
        return n;
    }

    public int getM() {
        return m;
    }

    public Matrix mul(Matrix matrix) {
        Matrix res = new Matrix(n, matrix.getM());
        for (int i=0;i<n;i++) {
            for (int j=0;j<matrix.getM();j++) {
                int sum = 0;
                for (int k=0;k<m;k++) {
                    sum += this.matrix[i][k] * matrix.matrix[k][j];
                }
                res.matrix[i][j] = sum;
            }
        }
        return res;
    }
    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                sb.append(matrix[i][j]).append(" ");
            }
            sb.append("\n");
        }
        return sb.toString();
    }

}
public class J04016 {
    static Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt(), p = sc.nextInt();
        Matrix a = new Matrix(n,m);
        a.nextMatrix(sc);
        Matrix b = new Matrix(m,p);
        b.nextMatrix(sc);
        System.out.println(a.mul(b));
    }
    public static void main1127464(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt(), p = sc.nextInt();
        Matrix a = new Matrix(n, m);
        a.nextMatrix(sc);
        Matrix b = new Matrix(m, p);
        b.nextMatrix(sc);
        System.out.println(a.mul(b));
    }

}

