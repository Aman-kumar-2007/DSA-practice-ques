class Solution:
    def sortTheStudents(self, score: List[List[int]], k: int) -> list[list[int]]:
        
        return sorted(score, key = lambda x: -x[k])