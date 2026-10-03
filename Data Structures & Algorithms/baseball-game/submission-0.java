class Solution {
    public int calPoints(String[] operations) {

        Stack<Integer> st = new Stack<>();

        for (String op : operations) {

            if (op.equals("C")) {
                st.pop();
            }

            else if (op.equals("+")) {
                int last = st.peek();
                st.pop();

                int secondLast = st.peek();

                st.push(last);
                st.push(last + secondLast);
            }

            else if (op.equals("D")) {
                st.push(2 * st.peek());
            }

            else {
                st.push(Integer.parseInt(op));
            }
        }

        int sum = 0;

        while (!st.empty()) {
            sum += st.peek();
            st.pop();
        }

        return sum;
    }
}