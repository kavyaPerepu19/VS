package rec;
import java.util.Arrays;
public class rotatedBin {
    

    int[] convert(int rot[]) {
        int smallest = 0;
        for (int i = 0; i < rot.length; i++) {
            if (rot[i] < rot[smallest]) {
                smallest = i;
            }
        }

        if (smallest == 0) {
            return rot; // No rotation needed
        }

        int[] sA1 = Arrays.copyOfRange(rot, smallest, rot.length);
        int[] sA2 = Arrays.copyOfRange(rot, 0, smallest);
        for (int i = 0; i < sA1.length; i++) {
            rot[i] = sA1[i];
        }
        int k = 0;
        for (int i = sA1.length; i < rot.length; i++) {
            rot[i] = sA2[k];
            k++;
        }

        return rot;
    }

    int binSearch(int arr[], int start, int end, int key) {
        if (start <= end) {
            int mid = (start + end) / 2;
            if (arr[mid] == key) {
                return mid;
            } else if (arr[mid] > key) {
                return binSearch(arr, start, mid - 1, key);
            } else {
                return binSearch(arr, mid + 1, end, key);
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        rotatedBin x = new rotatedBin();
        int rot[] = { 4, 5, 6, 7, 0, 1, 2 };
        int sort[] = x.convert(rot);
        System.out.println(x.binSearch(sort, 0, sort.length - 1, 7));
    }


}
