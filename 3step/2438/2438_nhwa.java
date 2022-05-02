import java.io.*;
import java.util.StringTokenizer;

public class q_2438 {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int N = Integer.parseInt(br.readLine());

        for(int i=0; i<N; i++){
            for(int j=0; j<=i; j++)
                bw.write("*");
            bw.newLine();
        }
        br.close();
        bw.flush();
        bw.close();

    }
}