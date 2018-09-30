
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Cameras {

    static int casas[];
//    static que

    public static void main(String[] args) throws IOException {

        BufferedReader tec = new BufferedReader(new InputStreamReader(System.in));
        int n, k, r;
        String input[], h;

        try {
            while (!(h = tec.readLine()).isEmpty()) {
                input = h.split(" ");
                n = Integer.parseInt(input[0]);
                k = Integer.parseInt(input[1]);
                r = Integer.parseInt(input[2]);
                casas = new int[n + 1];

                for (int i = 0; i < k; i++) {
                    casas[Integer.parseInt(tec.readLine())]++;
                }

//            System.out.println("casa[0] = " + casas[0]);
                for (int i = 1; i < r; i++) {
                    casas[i] += casas[i - 1];
//                System.out.println("casa[" + i + "] = " + casas[i]);
                }

                int q = 0, q2, pos, res = 0;
                r--;
                for (int i = 1; i <= n - r; i++) {
//                System.out.println("casa " + (i + r));
//                System.out.println("se le suma casa " + (i + r - 1));
                    casas[i + r] += casas[i + r - 1];
//                System.out.println(Arrays.toString(casas));

//                System.out.println("casa[" + i + "] = " + casas[i]);
                    int can;
                    can = casas[i + r] - casas[i - 1];

//                System.out.println("can = " + can + " rango = " + (i + r) + " , " + (i - 1));
                    if (can < 2) {
                        q2 = (2 - can);
//                    System.out.println("falta " + q2);
                        q += q2;
                        res += q2;
                        pos = i + r;
//                    System.out.println(Arrays.toString(casas));
                        while (q2 > 0) {
                            if (casas[pos] - casas[pos - 1] > 0) {
//                            System.out.println(pos + " ya tiene camara");
//                            System.out.println("se llena " + pos + " con " + q2);
                                casas[pos] += q2;
                            } else {
//                            System.out.println("se llena " + pos + " con " + q2);
                                casas[pos] += q2;
                                q2--;
                            }
                            pos--;
                        }
//                    System.out.println(pos);
                    }
//                System.out.println("\n");
                }
//            System.out.println(Arrays.toString(casas));
                System.out.println(res);
            }
        } catch (Exception e) {
        }
    }
}
