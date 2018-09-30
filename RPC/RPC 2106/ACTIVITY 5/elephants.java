
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class elephants {

    public static void main(String[] args) throws IOException {

        BufferedReader tec = new BufferedReader(new InputStreamReader(System.in));
        int casos = Integer.parseInt(tec.readLine());
        String input[];
        StringTokenizer x;

        for (int i = 0; i < casos; i++) {
            input = tec.readLine().split(" ");

            int cap = Integer.parseInt(input[0]);
            int red = Integer.parseInt(input[1]);
            int ele[] = new int[cap];
            x = new StringTokenizer(tec.readLine());

            for (int j = 0; j < cap; j++) {
                ele[j] = Integer.parseInt(x.nextToken());
            }
            Arrays.sort(ele);
            int con = 0;
            int pos = 0;

            for (int j = 0; j < cap; j++) {
                con += ele[j];
                if (con > red) {
                    break;
                }
                pos++;
            }
            System.out.println(pos);
        }
    }
}
