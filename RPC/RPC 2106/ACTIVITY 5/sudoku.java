
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
//n*(n+1) / 2;

public class sudoku {

    static boolean si(String input[][], int lon, int max) {
        for (int i = 0; i < lon; i++) {
            int acum = 0;
            for (int j = 0; j < lon; j++) {
                acum += Integer.parseInt(input[i][j]);
            }
            if (acum != max) {
                return false;
            }
        }
        for (int j = 0; j < lon; j++) {
            int acum = 0;
            for (int i = 0; i < lon; i++) {
                acum += Integer.parseInt(input[i][j]);
            }
            if (acum != max) {
                return false;
            }
        }
        return true;
    }

    static boolean grid(String[][] m) {
        int lon = (int) Math.sqrt(m.length);
        int fila = 0;
        int columna = 0;
        int hastaf = lon;
        int hastac = lon;
        int c = 0;
        int veces = 0;
        do {
            int[] cn = new int[m.length];
            for (int i = fila; i < hastaf; i++) {
                for (int j = columna; j < hastac; j++) {
                    cn[Integer.parseInt(m[i][j]) - 1]++;
                }
            }
            for (int i = 0; i < cn.length; i++) {
                if (cn[i] > 1) {
                    return false;
                }
            }
            c++;
            veces++;
            if (veces / lon == 1) {
                veces = 0;
                columna = 0;
                fila += lon;
                hastaf += lon;
                hastac = lon;
            } else {
                hastac += lon;
                columna += lon;
            }
        } while (c != m.length);
        return true;
    }

    public static void main(String[] args) {

        try {
            BufferedReader tec = new BufferedReader(new InputStreamReader(System.in));
            int casos = Integer.parseInt(tec.readLine()), lon;
            String input[][];

            for (int i = 0; i < casos; i++) {
                lon = Integer.parseInt(tec.readLine());
                input = new String[lon][lon];

                for (int j = 0; j < lon; j++) {
                    input[j] = tec.readLine().split(" ");
                }

                if (!si(input, lon, (lon * (lon + 1)) / 2)) {
                    System.out.println("no");
                } else {
                    if (grid(input)) {
                        System.out.println("yes");
                    } else {
                        System.out.println("no");
                    }

                }
            }
        } catch (Exception e) {
        }
    }
}
