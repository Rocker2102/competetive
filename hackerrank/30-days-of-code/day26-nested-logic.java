import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        int d1, m1, y1, d2, m2, y2;
        Scanner in = new Scanner(System.in);

        d1 = in.nextInt();
        m1 = in.nextInt();
        y1 = in.nextInt();
        d2 = in.nextInt();
        m2 = in.nextInt();
        y2 = in.nextInt();

        if (y1 < y2) {
            System.out.println(0);
        } else if (y1 > y2) {
            System.out.println(10000);
        } else if (m1 > m2) {
            System.out.println(500 * (m1 - m2));
        } else if (d1 > d2) {
            System.out.println(15 * (d1 - d2));
        } else {
            System.out.println(0);
        }
    }
}
