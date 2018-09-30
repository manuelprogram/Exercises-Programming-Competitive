
import java.io.IOException;
import java.util.Scanner;

public class medal {

    static int a, b, c, a1, b1, c1;

    static boolean color() {
        if (a > a1) {
            return true;
        } else if (a == a1) {
            if (b > b1) {
                return true;
            } else if (b == b1) {
                if (c > c1) {
                    return true;
                } else {
                    return false;
                }
            }
        }
        return false;
    }

    static boolean count() {
        if ((a + b + c) > (a1 + b1 + c1)) {
            return true;
        } else {
            return false;
        }
    }

    static void imprimi(String res) {
        System.out.println(a + " " + b + " " + c + " " + a1 + " " + b1 + " " + c1);
        System.out.println(res);
    }

    public static void main(String[] args) throws IOException {

        Scanner tec = new Scanner(System.in);
        int casos = tec.nextInt();

        for (int i = 0; i < casos; i++) {
            a = tec.nextInt();
            b = tec.nextInt();
            c = tec.nextInt();
            a1 = tec.nextInt();
            b1 = tec.nextInt();
            c1 = tec.nextInt();

            if (color() && count()) {
                imprimi("both");
            } else if (count()) {
                imprimi("count");
            } else if (color()) {
                imprimi("color");
            } else {
                imprimi("none");
            }
        }
    }
}
