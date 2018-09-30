
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class twins {

    public static void main(String[] args) throws IOException {

        BufferedReader tec = new BufferedReader(new InputStreamReader(System.in));
        int casos = Integer.parseInt(tec.readLine());
        StringTokenizer g;
        int x;
        String h;

        for (int i = 0; i < casos; i++) {
            boolean a1 = false, a2 = false;
            h = tec.readLine();
            g = new StringTokenizer(h);
            System.out.println(h);
            for (int j = 0; j < 10; j++) {
                x = Integer.parseInt(g.nextToken());
                if (x == 17) {
                    a1 = true;
                }
                if (x == 18) {
                    a2 = true;
                }
            }
            if (a1== true && a2== true) {
                System.out.println("both");
                continue;
            }
            if (a1) {
                System.out.println("zack");
                continue;
            }
            if (a2) {
                System.out.println("mack");
                continue;
            }
            System.out.println("none");
        }

    }

}
