#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> st;

    st.emplace(5);
    st.emplace(15);
    st.emplace(25);

    cout << "Top element: " << st.top();

}