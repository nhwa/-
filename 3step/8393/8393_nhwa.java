import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int result = num;
        
        for(int i=0; i < num; i++){
            result = result + i;
        }
        
        System.out.print(result);
        
    }
}