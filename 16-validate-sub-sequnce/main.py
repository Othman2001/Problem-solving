import math

def sortedSquaredArray(array):
    res = []
    # Write your code here.
    for element in array:
        res.append(math.pow(element ,2 ))
    sortedResult = sorted(res)
    return sortedResult

#
