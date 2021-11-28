#include <iostream>

int addNums(int nums[], int amount) {
    int sum = 0;
    for(int i = 0; i < amount; i++) {
        sum += nums[i];
    }
    return sum;
}

int main() {
    int inputNums[] = {3, 4};
    int amountOfNums = sizeof(inputNums)/sizeof(*inputNums);
    int result = addNums(inputNums, amountOfNums);
    printf("%d", result);
    return 0;
}
}