class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        count = 0 ; 
        for element in range(0 , len(stones)):
            print(stones[element])
            if(stones[element] in jewels):
                count+=1
        return count        
