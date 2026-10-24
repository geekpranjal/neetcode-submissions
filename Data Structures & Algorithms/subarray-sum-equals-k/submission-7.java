


class Solution {
    public int subarraySum(int[] nums, int k) {
        ArrayList<Integer> v = new ArrayList<>();
        v.add(nums[0]);

        for (int i = 1; i < nums.length; i++) {
            v.add(v.get(i - 1) + nums[i]);
        }

        HashMap<Integer, Integer> map = new HashMap<>();
        int cnt = 0;

        for (int num : v) {
            if (num == k) {
                cnt++;
            }

            int val = num - k;

            if (map.containsKey(val)) {
                cnt += map.get(val);
            }

            map.put(num, map.getOrDefault(num, 0) + 1);
        }

        return cnt;
    }
}

