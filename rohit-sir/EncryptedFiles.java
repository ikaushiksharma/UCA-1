import java.util.Scanner;

public class EncryptedFiles{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int encrypted_file[] = new int[n];
        int binary[] = new int[n];
        int i = 0;
        for (i = 0; i < n; i++) {
            encrypted_file[i] = sc.nextInt();
        }
        for(i=0;i<n;i++){
            binary[i]=sc.nextInt();
        }
        int sum = 0;
        for (i = 0; i < k; i++) {
            if (binary[i] != 1) {
                sum += encrypted_file[i];
            }
        }
        int maxSum = sum;
        i = 0;
        for (int j = k; j < n; j++) {
            if (binary[j] != 1) {
                sum += encrypted_file[j];
            }
            if (binary[i] != 1)
                sum -= encrypted_file[i];
            i++;
            maxSum = Math.max(maxSum, sum);
        }
        maxSum = Math.max(maxSum, sum);
        for (i = 0; i < n; i++) {
            if (binary[i] == 1) {
                maxSum += encrypted_file[i];
            }
        }
        System.out.println(maxSum);
    }
}