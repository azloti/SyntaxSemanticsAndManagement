#include<iostream>
#include<string>
using namespace std;

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    cout << "Result with integers: " << addNumbers(5, 10) << endl;
    string str = "10";

    cout << "Result with mixed types" << addNumbers(5, stoi(str)) << endl;

    return 0;
}