// To find the second largest number in an array
// Input: a[n] = {25, 16, 38, 10, 35, 48, 20, 50}
// Output: 48

public class SecondLargestNumber {
    public static void main(String[] args) {
        int[] a = {25, 16, 38, 10, 35, 48, 20, 50};
        int n = a.length;

        int max1, max2;

        // Initialize max1 and max2
        if (a[0] > a[1]) {
            max1 = a[0];
            max2 = a[1];
        } else {
            max1 = a[1];
            max2 = a[0];
        }

        // Traverse the rest of the array
        for (int i = 2; i < n; i++) {
            if (a[i] > max1) {
                max2 = max1;
                max1 = a[i];
            } else if (a[i] > max2 && a[i] != max1) {
                max2 = a[i];
            }
        }

        System.out.println("Second largest number: " + max2);
    }
}
