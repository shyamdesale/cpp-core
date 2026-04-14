#include <iostream>
#include <utility>
using namespace std;

int main() {

    pair<pair<int,int>, pair<int,int>> pr = {{1,2},{3,4}};

    cout << pr.first.first << " ";
    cout << pr.first.second << " ";
    cout << pr.second.first << " ";
    cout << pr.second.second;

    return 0;
}