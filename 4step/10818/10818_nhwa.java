import java.io.*;
import java.util.StringTokenizer;

public class q_10818{
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        int count = Integer.parseInt(br.readLine());
        int[] nums = new int[count];
        int max,min,temp;
        max = min = temp = 0;

        st = new StringTokenizer(br.readLine());
        for(int i=0; i<count; i++ ){
            nums[i] = Integer.parseInt(st.nextToken());
        }

        br.close();
        max= nums[0];
        min = nums[count-1];
        for(int i=0; i<count; i++){
                if(max < nums[i])
                    max = nums[i];
                if(min > nums[i])
                    min = nums[i];
        }
        bw.write(min +" "+max);

        bw.flush();
        bw.close();
    }
}
