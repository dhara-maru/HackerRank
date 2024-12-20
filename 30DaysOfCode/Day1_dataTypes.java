
//Day 1 : Data types
import java.io.*;
import java.util.*;

public class Day1_dataTypes {

    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";

        Scanner scan = new Scanner(System.in);

        int secondInt;
        double secondDouble;
        String secondString;

        secondInt = scan.nextInt();
        secondDouble = scan.nextDouble();
        scan.nextLine();
        secondString = scan.nextLine();

        System.out.println(i + secondInt);
        System.out.printf("%.1f%n", d + secondDouble);
        System.out.println(s + secondString);

        scan.close();
    }
}
