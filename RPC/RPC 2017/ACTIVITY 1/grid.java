//package rpc01;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class grid {

    static int f, c, tab[][] = new int[501][501], tab2[][] = new int[501][501];

    public static void main(String[] args) throws IOException {

        BufferedReader tec = new BufferedReader(new InputStreamReader(System.in));
        String input[], h;

        try {
            while (!(h = tec.readLine()).isEmpty()) {
                input = h.split(" ");
                f = Integer.parseInt(input[0]);
                c = Integer.parseInt(input[1]);

                for (int i = 0; i < f; i++) {
                    h = tec.readLine();
                    for (int j = 0; j < c; j++) {
                        tab[i][j] = Integer.parseInt(h.charAt(j) + "");
                        tab2[i][j] = 0;
                    }
                }

                Queue<Integer> fila = new LinkedList<>();
                Queue<Integer> columa = new LinkedList<>();
                Queue<Integer> pasos = new LinkedList<>();
                fila.add(0);
                columa.add(0);
                pasos.add(0);
                int f1, c1, p;

                while (!fila.isEmpty()) {
                    f1 = fila.poll();
                    c1 = columa.poll();
                    p = pasos.poll();

                    if (f1 < 0 || f1 >= f || c1 < 0 || c1 >= c) {
                        continue;
                    }
                    if (tab2[f1][c1] <= p && tab2[f1][c1] != 0) {
                        continue;
                    }
                    int incr = tab[f1][c1];
                    tab2[f1][c1] = p;
                    if (tab2[f - 1][c - 1] != 0) {
                        break;
                    }

                    fila.add(f1 - incr);
                    columa.add(c1);
                    pasos.add(p + 1);

                    fila.add(f1);
                    columa.add(c1 + incr);
                    pasos.add(p + 1);

                    fila.add(f1 + incr);
                    columa.add(c1);
                    pasos.add(p + 1);

                    fila.add(f1);
                    columa.add(c1 - incr);
                    pasos.add(p + 1);
                }

                if (tab2[f - 1][c - 1] == 0) {
                    System.out.println("IMPOSSIBLE");
                } else {
                    System.out.println(tab2[f - 1][c - 1]);
                }
            }
        } catch (Exception e) {
        }
    }
}
