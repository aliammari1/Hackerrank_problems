import java.io.*;

public class third_problem {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(bufferedReader.readLine().trim());

        bufferedReader.close();
        System.out.println((N % 2 == 1) || (N % 2 == 0 && N >= 6 && N <= 20) ? "Weird" : "Not Weird");
    }
}
