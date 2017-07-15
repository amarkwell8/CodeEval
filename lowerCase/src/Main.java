import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * Created by austinmarkwell on 7/15/17.
 */
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(
                new InputStreamReader(new FileInputStream(args[0]))
        );
        try{
            String line;
            while((line = br.readLine())!=null){
                System.out.println(line.toLowerCase());
            }
        } finally {
            br.close();
        }
    }
}
