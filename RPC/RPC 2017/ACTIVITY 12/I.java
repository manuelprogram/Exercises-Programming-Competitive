
import java.awt.geom.Line2D;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class I {
    
    public static void main(String[] args) throws IOException {
        
        BufferedReader tec = new BufferedReader(new InputStreamReader(System.in));
        int casos = Integer.parseInt(tec.readLine()), subcasos;
        String in[];
        tec.readLine(); 
        
        for (int i = 1; i <= casos; i++) {
            subcasos = Integer.parseInt(tec.readLine());
            double a, b, c, d;
            ArrayList<Line2D> seg = new ArrayList<>();
            
            for (int j = 0; j < subcasos; j++) {
                in = tec.readLine().split(" ");
                a = Double.parseDouble(in[0]);
                b = Double.parseDouble(in[1]);
                c = Double.parseDouble(in[2]);
                d = Double.parseDouble(in[3]);
                seg.add(new Line2D.Double(a, b, c, d));
            }
            
            int con = subcasos;
            for (int j = 0; j < seg.size(); j++) {
                for (int k = j + 1; k < seg.size(); k++) {
                    if (seg.get(j).intersectsLine(seg.get(k))) {
                        con+=2;
                    }
                }
            }
            
            System.out.println(con);
            if(i != casos){
                System.out.println("");
                tec.readLine();
            }
        }
    }    
}
