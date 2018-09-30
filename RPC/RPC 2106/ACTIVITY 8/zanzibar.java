
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


public class zanzibar {

    public static void main(String[] args) throws IOException {
        
        BufferedReader tec = new BufferedReader(new InputStreamReader(System.in));
       long casos = Integer.parseInt(tec.readLine());
        StringTokenizer x;
        long n, m;
        
        for (int i = 0; i < casos; i++) {
            x = new StringTokenizer(tec.readLine());
            int l = x.countTokens() - 2;
            n = Long.parseLong(x.nextToken());
            long acum= 0;
            
            for (int j = 0; j < l; j++) {
                m = Long.parseLong(x.nextToken());
                if (m > (n*2)) {
                    acum = acum + m - n*2;
                }
                n = m;
            }
            System.out.println(acum);
            
        }
    }
}
