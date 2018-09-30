
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.Reader;
import java.util.HashMap;
import java.util.Map;

public class password {

    static StringBuilder res;
    
    public static void main(String[] args) throws IOException {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int caasos = Integer.parseInt(br.readLine());
            
            for (int i = 0; i < caasos; i++) {
                res = new StringBuilder("");
                dec(Integer.parseInt(br.readLine()));
                res.insert(1, '.');
                System.out.println(res);
            }
           
    }

   static void dec(int n) {
        Map<Integer, Integer> stateToIter = new HashMap<Integer, Integer>();
        int state = 1;
        int iter = 0;
        while (!stateToIter.containsKey(state)) {
            stateToIter.put(state, iter);
            res.append((int)state / n);
            state = state % n;
            state = state * 10;
            iter++;
        }
    }
}
