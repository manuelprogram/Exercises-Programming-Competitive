//package rpc01;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Iterator;
import java.util.Set;
import java.util.StringTokenizer;
import java.util.TreeSet;

public class blur {

    static int tab[][] = new int[101][101], tab2[][] = new int[101][101];
    static int f, c, v;
    static int mf[] = {0, -1, -1, -1, 0, 1, 1, 1, 0}, mc[] = {0, -1, 0, 1, 1, 1, 0, -1, -1};

    static void dif() {
        int acum;
        for (int i = 0; i < f; i++) {
            for (int j = 0; j < c; j++) {

                acum = 0;
                for (int k = 0; k < 9; k++) {
                    int aux1 = i + mf[k], aux2 = mc[k] + j;
                    aux1 = (aux1 == -1) ? f - 1 : (aux1 == f) ? 0 : aux1;
                    aux2 = (aux2 == -1) ? c - 1 : (aux2 == c) ? 0 : aux2;
                    acum += tab[aux1][aux2];
                }
                tab2[i][j] = acum;
            }
        }
    }

    static void reescribir() {
        for (int i = 0; i < f; i++) {
            System.arraycopy(tab2[i], 0, tab[i], 0, c);
        }
    }

    static int contar() {
        int con = 1;
        Set<Integer> d = new TreeSet<>();

        for (int i = 0; i < f; i++) {
            for (int j = 0; j < c; j++) {
                d.add(tab2[i][j]);
//                System.out.print(tab2[i][j] + " ");
            }
//            System.out.println("");
        }

        return d.size();
    }

    public static void main(String[] args) throws IOException {

        BufferedReader tec = new BufferedReader(new InputStreamReader(System.in));
        String h, input[];
        StringTokenizer x;

        try {
            while (!(h = tec.readLine()).isEmpty()) {
                input = h.split(" ");
                c = Integer.parseInt(input[0]);
                f = Integer.parseInt(input[1]);
                v = Integer.parseInt(input[2]);

                for (int i = 0; i < f; i++) {
                    x = new StringTokenizer(tec.readLine());
                    for (int j = 0; j < c; j++) {
                        tab[i][j] = Integer.parseInt(x.nextToken());
                    }
                }

                for (int i = 1; i < v; i++) {
                    dif();
                    reescribir();
                }
                dif();

                System.out.println(contar());
            }
        } catch (Exception e) {
        }
    }
}
