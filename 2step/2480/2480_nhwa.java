import java.util.Scanner;

public class q_2480{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num1 = input.nextInt();
        int num2 = input.nextInt();
        int num3 = input.nextInt();
        int reward = 0;

        //같은 눈 3개
        if(num1 == num2 && num2== num3){
            reward = 10000 + num1 * 1000;
        }
        //같은 눈 2개 같같다
        else if(num1 == num2 && num2 != num3){
            reward = 1000 + num1 * 100;
        }
        //같은 눈 2개 같다같
        else if(num1 == num3 && num1 != num2){
            reward = 1000 + num1 * 100;
        }
        //같은 눈 2개 다같같
        else if(num2 == num3 && num1 != num2){
            reward = 1000 + num2 * 100;
        }
        //다 다른 눈
        else{
            if(num1 >= num2 && num1 >= num3){
                reward = num1 * 100;
            }
            else if(num2 >= num1 && num2 >= num3)
                reward = num2 * 100;
            else
                reward = num3 * 100;
        }

        System.out.print(reward);

    }
}