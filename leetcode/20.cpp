class Solution {
 public:
  bool isValid(string s) {
    stack<char, vector<char>> st;
    for (char ch : s) {
      if (ch == '(') {
        st.push(')');
      } else if (ch == '[') {
        st.push(']');
      } else if (ch == '{') {
        st.push('}');
      } else {
        if (st.empty()) {
          return false;
        } else if (st.top() != ch) {
          return false;
        }
        st.pop();
      }
    }
    return st.empty();
  }
};
