
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class juanma {

    public static void main(String[] args) throws IOException {
        
        BufferedReader tec = new BufferedReader(new InputStreamReader(System.in));
        int casos = Integer.parseInt(tec.readLine());
        
        for (int i = 0; i < casos; i++) {
            int res = Integer.parseInt(tec.readLine());
            res = (int) ((Math.pow(res, 4) - (6*Math.pow(res, 3)) + (23*Math.pow(res, 2)) - (18*res) + 24)/24);
            System.out.println(res);
        }
    }    
}
