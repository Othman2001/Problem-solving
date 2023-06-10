# naive solution
import math


def sortedSquaredArray(array):
    res = []
    for element in array:
        res.append(math.pow(element, 2))
    sortedResult = sorted(res)
    return sortedResult


# optimal solution
def sortedSquaredArraOptimized(array):
    sortedResult = [0 for _ in array]
    firstPointer = 0
    secondPointer = len(array) - 1

    for i in reversed(range(len(array))):
        firstValue = array[firstPointer]
        secondValue = array[secondPointer]
        if abs(firstValue) > abs(secondValue):
            sortedResult[i] = firstValue * firstValue
            firstPointer += 1
        else:
            sortedResult[i] = secondValue * secondValue
            secondPointer -= 1

    return sortedResult
