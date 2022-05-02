import java.io.*;
import java.util.StringTokenizer;

public class q_11022 {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int count = Integer.parseInt(br.readLine());
        int num1,num2 = 0;
        String str = "";

        StringTokenizer st;

        for(int i=1; i<count+1; i++){
            st = new StringTokenizer(br.readLine());
            num1 = Integer.parseInt(st.nextToken());
            num2 = Integer.parseInt(st.nextToken());

            bw.write("Case #"+i+": "+num1 +" + "+ num2+" = "+ (num1+num2));
            bw.newLine();
        }
        br.close();
        bw.flush();
        bw.close();

    }
}