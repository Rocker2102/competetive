import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;



public class Solution {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        String name, email;
        ArrayList<String> arr = new ArrayList<String>();
        int i = 0;

        while (i < N) {
            name = in.next();
            email = in.next();
            if (email.contains("@gmail.com")) {
                arr.add(name);
            }

            i++;
        }

        Collections.sort(arr);
        for (String key : arr) {
            System.out.println(key);
        }
    }
}
