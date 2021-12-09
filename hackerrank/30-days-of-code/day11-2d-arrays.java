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
    public static int hourGlassSum( List<List<Integer>> arr, int row, int column) {
        return (
            arr.get(row).get(column) +
            arr.get(row).get(column + 1) +
            arr.get(row).get(column + 2) +
            arr.get(row + 1).get(column + 1) +
            arr.get(row + 2).get(column) +
            arr.get(row + 2).get(column + 1) +
            arr.get(row + 2).get(column + 2)
        );
    }

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        List<List<Integer>> arr = new ArrayList<>();

        IntStream.range(0, 6).forEach(i -> {
            try {
                arr.add(
                    Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                        .map(Integer::parseInt)
                        .collect(toList())
                );
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        bufferedReader.close();

        final int ignore = 2;
        int maxSum = Integer.MIN_VALUE;

        for (int i = 0; i < 6 - ignore; i++) {
            for (int j = 0; j < 6 - ignore; j++) {
                maxSum = Math.max(maxSum, hourGlassSum(arr, i, j));
            }
        }

        System.out.println(maxSum);
    }
}
