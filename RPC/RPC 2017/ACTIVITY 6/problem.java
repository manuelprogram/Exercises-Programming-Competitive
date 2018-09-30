
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class problem {

    static long exponencion_modular(long a, long b, long c) {
        if (b == 0) {
            return 1;
        }
        if (b % 2 == 0) {
            long aux = exponencion_modular(a, b >> 1, c);
            return (aux * aux) % c;
        }
        return (a % c * exponencion_modular(a, b - 1, c)) % c;
    }

    public static void main(String[] args) throws IOException {

        BufferedReader tec = new BufferedReader(new InputStreamReader(System.in));
//        BufferedReader tec = new BufferedReader(new FileReader("D://in.txt"));
        int casos = Integer.parseInt(tec.readLine()), n;
        BigInteger res, cien = new BigInteger("100");
        String in;

        for (int i = 0; i < casos; i++) {
            in = tec.readLine();
            res = new BigInteger(in);
            n = res.mod(cien).intValue();
            if (n == 0) {
                if (in.equals("0")) {
                    System.out.println(1);
                } else {
                    System.out.println(76);
                }
            } else {
                long q = exponencion_modular(66, n, 100);
                if (q == 66) {
                    if (in.equals("1")) {
                        System.out.println(66);
                    } else {
                        System.out.println(16);
                    }
                } else {
                    System.out.println(q);
                }
            }
        }
    }

}
