import java.io.*;

public class HELLOFILE {
    public static void main(String[] args) throws IOException {
        File file = new File("Hello.txt");
        InputStream inputStream = new FileInputStream(file);
        InputStreamReader reader = new InputStreamReader(inputStream);
        BufferedReader bufferedReader = new BufferedReader(reader);
        String line;
        while ((line = bufferedReader.readLine())!= null) {
            System.out.println(line);
        }
    }
}
