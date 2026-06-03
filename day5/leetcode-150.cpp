class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int res = 0;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "/" && tokens[i] != "*" && tokens[i] != "+" &&
                tokens[i] != "-") {
                st.push(stoi(tokens[i]));
            } else {
                string op = tokens[i];
                int num2 = st.top();
                st.pop();
                int num1 = st.top();
                st.pop();
                if (op == "+")
                    res = num1 + num2;
                if (op == "*")
                    res = num1 * num2;
                if (op == "-")
                    res = num1 - num2;
                if (op == "/")
                    res = num1 / num2;
                st.push(res);
            }
        }
        return st.top();
    }
};