
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Alphabet {

    public static void main(String[] args) throws IOException {

        BufferedReader tec = new BufferedReader(new InputStreamReader(System.in));
        String h;
        int arr[][];

        try {
            while (!(h = tec.readLine()).isEmpty()) {
                arr = new int[h.length()][26];
                for (int i = 0; i < h.length(); i++) {
                    arr[i][(int) (h.charAt(i) - 'a')] = 1;
                }

                for (int i = 1; i < 26; i++) {
                    arr[0][i] = Math.max(arr[0][i - 1], arr[0][i]);
                }
                for (int i = 1; i < h.length(); i++) {
                    arr[i][0] = Math.max(arr[i - 1][0], arr[i][0]);
                }

                for (int i = 1; i < h.length(); i++) {
                    for (int j = 1; j < 26; j++) {
                        if (arr[i - 1][j] == arr[i][j - 1]) {
                            arr[i][j] += Math.max(arr[i - 1][j], arr[i][j - 1]);
                        } else {
                            arr[i][j] = Math.max(arr[i - 1][j], arr[i][j - 1]);
                        }
                    }
                }
                System.out.println(26 - arr[h.length() - 1][25]);

//            for (int i = 0; i < h.length(); i++) {
//                for (int j = 0; j < 26; j++) {
//                    System.out.print(arr[i][j] + " ");
//                }
//                System.out.println("");
//            }
            }
        } catch (Exception e) {
        }
    }
}
