 #include <iostream>
#include <stack>
#include <string.h>
#include<stdio.h>
using namespace std;
int main() 
{
    char ch[1000];
    int l;
    cout << "Enter a string with parentheses: ";
    cin >>ch;
    l=strlen(ch);
    stack<char> s;
    for (int i=0;i<l;i++) {
         if (ch[i] == '(' || ch[i] == '[' || ch[i]== '{') 
		 {
            s.push(ch[i]);
        } else if (ch[i]== ')' || ch[i]== ']' || ch[i]== '}')
		 {
            if (s.empty() || 
                (ch[i]== ')' && s.top() != '(') ||
                (ch[i]== ']' && s.top() != '[') ||
                (ch[i]== '}' && s.top() != '{'))
				 {
                cout << "Parentheses are not matching.\n";
                return 0;
            }
            s.pop();
        }
    }

    if (s.empty()) {
        cout << "Parentheses are matching.\n";
    } else {
        cout << "Parentheses are not matching.\n";
    }

    return 0;
}

