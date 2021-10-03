def max_subarray(numbers):
    best_sum = 0
    best_start = best_end = 0

    x = enumerate(numbers)
    print(list(x))

numbers = [10, 20, 30, 40, 50]
max_subarray(numbers)