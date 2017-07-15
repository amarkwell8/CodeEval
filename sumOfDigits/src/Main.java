import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;

/**
 * Created by austinmarkwell on 7/15/17.
 */
public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(
                new InputStreamReader(new FileInputStream(args[0]))
        );
        try{
            String line;
            while((line = br.readLine())!=null){
                int sum = -99;
                char[] lineInChar = line.toCharArray();
                for(int x = 0; x < lineInChar.length; x++){
                    if(Character.isDigit(lineInChar[x])){
                        if(sum == -99){
                            sum = Character.getNumericValue(lineInChar[x]);
                        }
                        else{
                            sum = sum + Character.getNumericValue(lineInChar[x]);
                        }
                    }
                }
                System.out.println(sum);
            }
        } finally {
            br.close();
        }
    }
}
