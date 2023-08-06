#include <bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int prec(char c)
{
    if (c == '^')
        return 4;
    else if (c == '/' || c == '*')
        return 3;
    else if (c == '+' || c == '-')
        return 2;
    else if (c == '$')
        return 1;
    else
        return -1;
}

// Function to check if a character is an opening parenthesis
bool isOpeningParenthesis(char c)
{
    return (c == '(' || c == '{' || c == '[' || c == '<');
}

// Function to check if a character is a closing parenthesis
bool isClosingParenthesis(char c)
{
    return (c == ')' || c == '}' || c == ']' || c == '>');
}

// Function to check if two parentheses types match
bool areParenthesesMatching(char opening, char closing)
{
    return ((opening == '(' && closing == ')') ||
            (opening == '{' && closing == '}') ||
            (opening == '[' && closing == ']') ||
            (opening == '<' && closing == '>'));
}

// The main function to convert infix expression to postfix expression
void infixToPostfix(string s)
{
    stack<char> st;
    string result;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        // If the scanned character is an operand, add it to the output string.
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;

        // If the scanned character is an opening parenthesis, push it to the stack.
        else if (isOpeningParenthesis(c))
            st.push(c);

        // If the scanned character is a closing parenthesis,
        // pop and add to output string from the stack
        // until a matching opening parenthesis is encountered.
        else if (isClosingParenthesis(c))
        {
            while (!st.empty() && !isOpeningParenthesis(st.top()))
            {
                result += st.top();
                st.pop();
            }

            // Pop the matching opening parenthesis from the stack.
            if (!st.empty() && isOpeningParenthesis(st.top()))
                st.pop();
        }

        // If an operator is scanned
        else
        {
            while (!st.empty() && prec(s[i]) <= prec(st.top()))
            {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop all the remaining elements from the stack
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }

    cout << result << endl;
}

// Driver code
int main()
{
    string exp = "(A$B+C)#(K+L-M*N+O^P*W/U) ";

    // Function call
    infixToPostfix(exp);

    return 0;
}
