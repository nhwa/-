import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num1 = input.nextInt();
        int num2 = input.nextInt();
        int num3 = input.nextInt();
        
        int hour;
        int minute;
        
        if(num2 + num3 >= 60){
            hour = (num2 + num3) / 60;
            minute = (num2+num3)% 60;
            hour = hour + num1;      
            
            if(hour >= 24)
                hour = hour -24;
        }
        
        else{
            hour = num1;
            minute = num2+ num3;
        }
        
        System.out.print(hour+ " "+minute);
       
    }
}