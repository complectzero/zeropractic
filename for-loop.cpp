#include <iostream>
using namespace std;

int add_nums(int num1,int num2) {
    int sum = 0;
    int nums[2] = {num1, num2};
    for(int i = 0; i < 2; i++) {
        sum += nums[i];
    }
    return sum;
}

int main() {
    cout << add_nums(3, 4);
    return 0;
}
