# this is algo expert problem
def twoNumberSum(array, targetSum):
    for i in range(len(array)):
        y = targetSum - array[i]
        if y in array and y != array[i]:
            return sorted([array[i], y])
        else:
            continue
    return []
