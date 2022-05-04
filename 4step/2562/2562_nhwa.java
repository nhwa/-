import java.io.*;
import java.util.StringTokenizer;

public class q_2562 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer st;

        int max, order;
        max = order = 0;
        int[] nums = new int[9];

        for(int i=0; i<9; i++)
            nums[i] = Integer.parseInt(br.readLine());

        for(int i=0; i<9; i++)
            if(max <= nums[i]) {
                max = nums[i];
                order = i+1;
            }
        br.close();
        bw.write(String.valueOf(max));
        bw.newLine();
        bw.write(String.valueOf(order));
        bw.flush();
        bw.close();

    }
}
