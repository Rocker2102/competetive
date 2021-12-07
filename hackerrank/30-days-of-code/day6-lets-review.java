import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        String s;
        in.nextLine();

        ArrayList<Character> odd = new ArrayList<Character>();
        ArrayList<Character> even = new ArrayList<Character>();

        while (T > 0) {
            s = in.nextLine();

            for (int i = 0; i < s.length(); i++) {
                if (i % 2 == 0) {
                    even.add(s.charAt(i));
                } else {
                    odd.add(s.charAt(i));
                }
            }

            for (int i = 0; i < even.size(); i++) {
                System.out.print(even.get(i));
            }
            System.out.print(" ");
            for (int i = 0; i < odd.size(); i++) {
                System.out.print(odd.get(i));
            }
            System.out.println();

            odd.clear();
            even.clear();
            T--;
        }
    }
}
