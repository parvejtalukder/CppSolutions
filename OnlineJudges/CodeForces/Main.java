import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String line; 
        Scanner sc = new Scanner(System.in);
        line = sc.nextLine();
        String[] arr = line.split("[^A-Za-z]+");
        // System.out.println(arr.length);
        if (!(arr.length == 1 && arr[0].isEmpty())) {
            System.out.println(arr.length);
        }
        sc.close();
    }
}