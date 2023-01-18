#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main(void)
{
    stack<int> S;
    int N;
    cin >> N;

    string input;
    int tmp;
    for (int i=0; i<N; i++) {
        cin >> input;

        if (input == "push") {
            cin >> tmp;
            S.push(tmp);
        }
        else if (input == "pop") {
            if (S.empty())
                cout << -1 << endl;
            else {
                cout << S.top() << endl;
                S.pop();
            }
        }
        else if (input == "size") {
            cout << S.size() << endl;
        }
        else if (input == "empty") {
            cout << S.empty() << endl;
        }
        else if (input == "top") {
            if (S.empty())
                cout << -1 << endl;
            else
                cout << S.top() << endl;
        }
    }
}