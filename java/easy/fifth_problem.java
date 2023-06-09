import java.io.*;

public class fifth_problem {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("================================");
        for (int i = 0; i < 3; i++) {
            String[] input = reader.readLine().split(" ");
            String s = input[0];
            int n = Integer.parseInt(input[1]);
            System.out.printf("%-14s %03d%n", s, n);
        }
        System.out.println("================================");
    }
}
