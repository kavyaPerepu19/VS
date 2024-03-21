
class Main {
    public static int findMax(int start, int end, int[] arr) {
        int max = Integer.MIN_VALUE;
        for (int i = start; i <= end; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }

    public static int findTrappedWater(int[] array) {
        int ans = 0;
        for (int i = 1; i < array.length - 1; i++) {
            int leftMax = findMax(0, i, array);
            int rightMax = findMax(i + 1, array.length - 1, array);
            int minHeight = Math.min(leftMax, rightMax);
            int trappedWater = Math.max(0, minHeight - array[i]);
            ans += trappedWater;
        }
        return ans;
    }

    public static void main(String[] args) {
        int array[] = {4, 2, 0, 6, 3, 2, 5};
        int trappedWater = findTrappedWater(array);
        System.out.println(trappedWater);
    }
}
