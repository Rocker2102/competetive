import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";

        Scanner scan = new Scanner(System.in);

        /* Declare second integer, double, and String variables. */

        /* Read and save an integer, double, and String to your variables.*/
        // Note: If you have trouble reading the entire String, please go back and review the Tutorial closely.

        /* Print the sum of both integer variables on a new line. */

        /* Print the sum of the double variables on a new line. */

        /* Concatenate and print the String variables on a new line;
        	the 's' variable above should be printed first. */
        Scanner in = new Scanner(System.in);
        int _i;
        double _d;
        String _s;
        _i = in.nextInt();
        _d = in.nextDouble();

        /* skip the newline ('\n') character */
        in.nextLine();

        _s = in.nextLine();

        System.out.println(i + _i);
        System.out.println(d + _d);
        System.out.println(s + _s);

        scan.close();
    }
}
