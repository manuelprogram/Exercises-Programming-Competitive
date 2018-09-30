
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class royale {

    public static void main(String[] args) throws IOException {

        BufferedReader tec = new BufferedReader(new InputStreamReader(System.in));
        String input;
        StringBuilder res, res2;

        try {
            while (true) {
                res = new StringBuilder();
                res2 = new StringBuilder();
                input = tec.readLine();
                char l[] = input.toCharArray();

                for (int i = 0; i < input.length(); i++) {
                    if (res.indexOf("" + l[i]) == -1) {
                        res.append(l[i]);
                    }
                }
                String aux = res.toString();

                int t = input.length();

                for (int i = 0; i < t; i++) {
                    String x = "" + (aux.indexOf(input.charAt(i)) + 1);

                    for (int j = 0; j < x.length(); j++) {
                        int y = Integer.parseInt("" + x.charAt(j));
                        if (y == 2) {
                            res2.append(5);
                            continue;
                        }
                        if (y == 5) {
                            res2.append(2);
                            continue;
                        }
                        if (y == 6) {
                            res2.append(9);
                            continue;
                        }
                        if (y == 9) {
                            res2.append(6);
                            continue;
                        }
                        res2.append(y);
                    }
                }
                System.out.println(res2);
            }
        } catch (Exception e) {
        }
    }
}
