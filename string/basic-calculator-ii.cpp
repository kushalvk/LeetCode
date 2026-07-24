class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int num = 0;
        char sign = '+';

        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];

            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }

            if ((!isdigit(ch) && ch != ' ') || i == s.size() - 1) {

                if (sign == '+') {
                    st.push(num);
                } else if (sign == '-') {
                    st.push(-num);
                } else if (sign == '*') {
                    int prev = st.top();
                    st.pop();
                    st.push(prev * num);
                } else if (sign == '/') {
                    int prev = st.top();
                    st.pop();
                    st.push(prev / num);
                }

                sign = ch;
                num = 0;
            }
        }

        int ans = 0;

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};