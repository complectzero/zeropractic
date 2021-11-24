#include <iostream>
using namespace std;

int add_nums(int nums[]) {
    int sum = 0;
    for(int i = 0; i < 2; i++) {
        sum += nums[i];
    }
    return sum;
}

int main() {
    int input_nums[2] = {3, 4};
    cout << add_nums(input_nums);
    return 0;
}