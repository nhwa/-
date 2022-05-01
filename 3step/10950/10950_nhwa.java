import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int count = input.nextInt();
        int[] num1 = new int[count];
        int[] num2 = new int[count];
        int[] result = new int[count];
        
        for(int i=0; i<count; i++){
            num1[i] = input.nextInt();
            num2[i] = input.nextInt();
            result[i] = num1[i] + num2[i];
        }
        
        for(int i=0; i<count; i++){
            System.out.println(result[i]);
        }
    }
}