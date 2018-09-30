//package rpc06;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class robot {

    static int casos, fi, co;
    static BigInteger tabla[][] = new BigInteger[26][26];

    static void iniciar() {
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < 26; j++) {
                tabla[i][j] = BigInteger.ZERO;
            }
        }
    }

    static BigInteger dp(int c, int r) {
        if (tabla[c][r].compareTo(BigInteger.ZERO) != 0) {
            return tabla[c][r];
        }

        if (c == 1 || r == 1) {
            return tabla[c][r] = BigInteger.ONE;
        }

        BigInteger res = BigInteger.ZERO;
        for (int i = 1; i <= r; i++) {
            res = res.add(dp(c - 1, i));
        }
        return tabla[c][r] = res.add(BigInteger.ZERO);
    }

    public static void main(String[] args) throws IOException {

        iniciar();
        dp(25, 25);

        BufferedReader tec = new BufferedReader(new InputStreamReader(System.in));
        casos = Integer.parseInt(tec.readLine());
        String input[];
//        for (int i = 1; i < 15; i++) {
//            for (int j = 1; j < 15; j++) {
//                if (tabla[i][j].compareTo(BigInteger.ZERO) == 0) {
//                    dp(i, j);
//                }
//                System.out.println(tabla[i][j]);
//            }
//        }

        for (int i = 0; i < casos; i++) {
            input = tec.readLine().split(" ");
            fi = Integer.parseInt(input[0]);
            co = Integer.parseInt(input[1]);
            if (tabla[fi][co].compareTo(BigInteger.ZERO) == 0) {
                dp(fi, co);
            }
            System.out.println(tabla[fi][co]);
        }
    }
}
