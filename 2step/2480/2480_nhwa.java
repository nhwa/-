import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num1 = input.nextInt();
        int num2 = input.nextInt();
        int num3 = input.nextInt();
        int reward = 0;
        
        if(num1 == num2){
            if(num2 == num3){
               reward = 10000 + num1 * 1000;
            }
            else
                reward = 1000 + num1 * 100;
        }
        else if(num2 == num3){
            if(num2 == num1){
               reward = 10000 + num1 * 1000;
            }
            else
                reward = 1000 + num2 * 100;
        }
        else if(num3 == num1){
            if(num3 == num2){
               reward = 10000 + num1 * 1000;
            }
            else
                reward = 1000 + num1 * 100;
        }
        else{
            if(num1 > num2){
                if(num1 > num3)
                    reward = num1 * 100;
            }
            else if(num2 > num3)
                reward = num2 * 100;
            else
                reward = num3 * 100;
        }
        
        System.out.print(reward);
       
    }
}