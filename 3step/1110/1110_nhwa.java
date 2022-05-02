import java.util.Scanner;

public class q_1110 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int num_l,num_r,count,temp,resultnum;
        num_l = num_r = count = temp = resultnum =0;

        if(num==0) {
            count++;
        } else{
            if (num < 10) {
                num_l = 0;
                num_r = num;
            }
            else{
                num_l = num/10;
                num_r = num%10;
            }

            while(resultnum != num){
                temp = num_r;
                num_r = (num_l+num_r)%10;
                num_l = temp;
                resultnum = num_l * 10 + num_r;
                count++;
            }
        }
        System.out.println(count);

    }
}
