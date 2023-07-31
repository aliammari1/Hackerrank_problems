import java.io.*;

public class fourth_problem {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int x = Integer.parseInt(reader.readLine());
        double d = Double.parseDouble(reader.readLine());
        String s = reader.readLine();
        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: "+ x);
    }
}

