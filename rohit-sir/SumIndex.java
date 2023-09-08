import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

public class SumIndex {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int k = sc.nextInt();
        System.out.println(Arrays.toString(twoSum(arr,k)));
    }

    private static int[] twoSum(int[] arr, int k) {
        int n = arr.length;
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < n; i++) {
            if (map.containsKey(k - arr[i])) {
                return new int[] { map.get(k - arr[i]), i };
            }
            map.put(arr[i], i);
        }
        return new int[] { -1, -1 };
    }
}
