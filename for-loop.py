def add_nums(nums):
    summ = 0
    for x in nums:
        summ += x
    return summ


input_nums = [3, 4]
result = add_nums(input_nums)
print(f'sum: {result}')
