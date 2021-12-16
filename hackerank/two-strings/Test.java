import java.io.*;
import java.util.HashMap;
import java.util.stream.IntStream;

//https://www.hackerrank.com/challenges/two-strings/problem
class Result {

    /*
     * Complete the 'twoStrings' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts following parameters:
     *  1. STRING s1
     *  2. STRING s2
     */

    public static String twoStrings(String s1, String s2) {
        HashMap<Character, Boolean> hashMapS1 = new HashMap<>();
        for (int i = 0; i < s1.length(); i++) {
            hashMapS1.put(s1.charAt(i), Boolean.TRUE);
        }

        for (int i = 0; i < s2.length(); i++) {
            if (null != hashMapS1.get(s2.charAt(i))) {
                return "YES";
            }
        }

        return "NO";
    }

}

public class Test {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int q = Integer.parseInt(bufferedReader.readLine().trim());

        IntStream.range(0, q).forEach(qItr -> {
            try {
                String s1 = bufferedReader.readLine();

                String s2 = bufferedReader.readLine();

                String result = Result.twoStrings(s1, s2);

                bufferedWriter.write(result);
                bufferedWriter.newLine();
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        bufferedReader.close();
        bufferedWriter.close();
    }
}
