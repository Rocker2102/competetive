import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt(), n, count = 0;
        boolean flag;

        while (T > 0) {
            flag = false;
            n = in.nextInt();
            T--;

            if (n == 1) {
                System.out.println("Not prime");
            } else if (n == 2) {
                System.out.println("Prime");
            } else {
                for (int i = 2; i <= n / 2; i++) {
                    if (n % i == 0) {
                        System.out.println("Not prime");
                        flag = true;
                        break;
                    }
                }
                if (!flag) {
                    System.out.println("Prime");
                }
            }
        }
    }
}
