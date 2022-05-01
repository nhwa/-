import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num1 = input.nextInt();
        int num2 = input.nextInt();
        
        if(num2 < 45){
            num2 = num2 - 45 + 60;
            if(num1 == 0)
                num1 = num1 - 1 + 24;
            else if(num1 != 0)
                num1 = num1 - 1;
        }
        else
            num2 = num2 - 45;
            
        System.out.print(num1+ " "+num2);
       
    }
}