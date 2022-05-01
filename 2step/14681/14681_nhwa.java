import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num1 = input.nextInt();
        int num2 = input.nextInt();
        
        if(num1 > 0 && num2 > 0 )
            System.out.print("1");
        else if(num1 > 0 && num2 < 0 )
            System.out.print("4");
        else if(num1 < 0 && num2 > 0 )
            System.out.print("2");
        else
            System.out.print("3");
       
    }
}