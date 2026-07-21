#include<bits/stdc++.h>
using namespace std;

int longestValidParentheses(string s) {
    int maxLen = 0;
    stack<int> st;
    st.push(-1); // base index

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            st.pop();
            if (st.empty()) {
                st.push(i);
            } else {
                maxLen = max(maxLen, i - st.top());
            }
        }
    }
    return maxLen;
}

int main() {
    
    cout<< longestValidParentheses("(()")<<endl;      // Output: 2
    cout<< longestValidParentheses(")()())")<<endl;   // Output: 4
    cout<< longestValidParentheses("")<<endl;         // Output: 0

    return 0;
}