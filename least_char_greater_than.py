class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        m = 0
        n = len(letters)-1
        o = (m+n)//2
        minmaxchar = letters[len(letters)-1]
        letters.sort()
        while m<=n:
            o = (m+n)//2
            if letters[o]<=target:
                m = o+1
            else:
                n = o-1
        
        if m == len(letters):
            return letters[0]
        else:
            return letters[m]
        