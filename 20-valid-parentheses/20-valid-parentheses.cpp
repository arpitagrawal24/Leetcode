class Solution
{
    public:
        bool isValid(string s)
        {
            stack<char> s1;
            for (auto &i: s)
            {
                if (i == '(' || i == '{' || i == '[')
                    s1.push(i);
                else if (!s1.empty() && i == ')' && s1.top() == '(')
                    s1.pop();
                else if (!s1.empty() && i == '}' && s1.top() == '{')
                    s1.pop();
                else if (!s1.empty() && i == ']' && s1.top() == '[')
                    s1.pop();
                else
                    return false;
            }
            return s1.empty();
        }
};