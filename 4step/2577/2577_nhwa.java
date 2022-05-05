import java.io.*;
import java.util.StringTokenizer;

public class q_2577 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int[] nums = new int[3];
        int[] nums_count = new int[10];
        int mul=1;

        for(int i=0; i<3; i++) {
            nums[i] = Integer.parseInt(br.readLine());
            mul = mul * nums[i];
        }

        String number = String.valueOf(mul);
        char[] number_type = number.toCharArray();

        for(int i=0; i< nums_count.length; i++) {
                for(int j=0; j< number_type.length; j++){
                    if(number_type[j] == i){
                        nums_count[j]++;
                    }
                }
        }
        System.out.println(nums_count);
    }
}
