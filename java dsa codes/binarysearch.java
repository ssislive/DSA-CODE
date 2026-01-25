public class binarysearch {

    public static int binarysearch(int arr[], int size, int key) {
        int start = 0;
        int end = size - 1;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (arr[mid] == key) {
                return mid;
            } else if (arr[mid] > key) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return -1;
    }

    public static void main(String[] arg) {
        int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int size = arr.length;
        int key = 5;
        int result = binarysearch(arr, size, key);
        if (result == -1) {
            System.out.println("element not found");
        } else {
            System.out.println("Element found at index   " + result);
        }
    }
}