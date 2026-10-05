class Solution {

    boolean srchinrow(int[][] matrix, int tar, int mr) {
        int n = matrix[0].length;
        int st = 0, end = n - 1;

        while(st <= end) {
            int mid = st + (end - st) / 2;

            if(tar == matrix[mr][mid]) {
                return true;
            }
            else if(tar > matrix[mr][mid]) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return false;
    }

    public boolean searchMatrix(int[][] matrix, int target) {
        int rows = matrix.length;
        int cols = matrix[0].length;

        int sr = 0;
        int er = rows - 1;

        while(sr <= er) {

            int mr = sr + (er - sr) / 2;

            if(matrix[mr][0] <= target && target <= matrix[mr][cols - 1]) {
                return srchinrow(matrix, target, mr);
            }
            else if(target > matrix[mr][cols - 1]) {
                sr = mr + 1;
            }
            else {
                er = mr - 1;
            }
        }

        return false;
    }
}