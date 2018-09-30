
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.Set;
import java.util.SortedMap;
import java.util.TreeMap;
import java.util.TreeSet;

public class classtime {

    public static void main(String[] args) throws IOException {

        BufferedReader tec = new BufferedReader(new InputStreamReader(System.in));
        String h, input[], aux, aux2;
        int n;
        SortedMap<String, Set<String>> mapa = new TreeMap<>();

        try {
            while (!(h = tec.readLine()).isEmpty()) {
                n = Integer.parseInt(h);
                mapa.clear();

                for (int i = 0; i < n; i++) {
                    input = tec.readLine().split(" ");
                    if (mapa.containsKey(input[1])) {
                        mapa.get(input[1]).add(input[0]);
                    } else {
                        mapa.put(input[1], new TreeSet<String>());
                        mapa.get(input[1]).add(input[0]);
                    }
                }

                Iterator it = mapa.keySet().iterator();
                while (it.hasNext()) {
                    aux = it.next().toString();
                    Iterator it2 = mapa.get(aux).iterator();

                    while (it2.hasNext()) {
                        System.out.println(it2.next().toString() + " " + aux);
                    }
                }
            }
        } catch (Exception e) {
        }
    }
}
