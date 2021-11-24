const add_nums = (nums) => {
    let sum = 0;
    for(const num of nums) {
        sum += num;
    }
    return sum;
}

const input_nums = [3, 4];
const result = add_nums(input_nums);
console.log({ result });