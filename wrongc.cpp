#include<iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i <= size; i++) {
        total += arr[i]
    }
    return total;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int result = calculateSum(numbers, 5);
    cout << "Sum in C++: " << result << endl;
    return 0;
}