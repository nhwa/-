import java.io.*;
import java.util.StringTokenizer;

public class q_10951 {
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String end;
        StringTokenizer st;
        
        while((end = br.readLine()) != null){
            st = new StringTokenizer(end);
            System.out.println(String.valueOf(Integer.parseInt(st.nextToken()) + Integer.parseInt(st.nextToken())));
        }
        br.close();
    }
}
