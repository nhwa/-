import java.io.*;
import java.util.StringTokenizer;

public class q_10871 {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());

        int count = Integer.parseInt(st.nextToken());
        int comparenum = Integer.parseInt(st.nextToken());
        int[] nums = new int[count];

        st = new StringTokenizer(br.readLine());
        for(int i=0; i<count; i++){
            nums[i] = Integer.parseInt(st.nextToken());
            if(nums[i] < comparenum) {
                bw.write(String.valueOf(nums[i]));
                bw.write(" ");
            }
        }

        br.close();
        bw.flush();
        bw.close();

    }
}