// Day 6 : String (Let's Review)
import java.io.*;
import java.util.*;

public class Day6_LetsReview {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(); 
        sc.nextLine();
        
        for (int t = 0; t < T; t++) {
            String S = sc.nextLine();
            StringBuilder even = new StringBuilder();
            StringBuilder odd = new StringBuilder();
            
            for (int i = 0; i < S.length(); i++) {
                if (i % 2 == 0) {
                    even.append(S.charAt(i));
                } else {
                    odd.append(S.charAt(i));
                }
            }
            
            System.out.println(even + " " + odd);
        }
        
    }
}
