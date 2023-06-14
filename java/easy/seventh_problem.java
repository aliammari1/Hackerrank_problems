import java.io.*;

public class seventh_problem {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int q = Integer.parseInt(reader.readLine());
        int a = 0;
        int b = 0;
        int n = 0;
        for (int i = 0; i < q; i++) {
            String[] input = reader.readLine().split(" ");
            a = Integer.parseInt(input[0]);
            b = Integer.parseInt(input[1]);
            n = Integer.parseInt(input[2]);
            for (int j = 0; j < n; j++) {
                a += Math.pow(2, j) * b;
                System.out.print(a + " ");
            }
            System.out.println();
        }
    }

}
