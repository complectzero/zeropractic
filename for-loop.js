const addNums = (nums) => {
    let sum = 0;
    for(const num of nums) {
        sum += num;
    }
    return sum;
}

const inputNums = [3, 4];
const result = addNums(inputNums);
console.log({ result });