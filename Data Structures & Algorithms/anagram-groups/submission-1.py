class Solution:

    
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d={}
        for i in strs:
            d1 = {}
            for c in i:
                if c in d1:
                    d1[c] += 1
                else:
                    d1[c] = 1
            key = tuple(sorted(d1.items()))
            if key not in d:
                d[key] = [] 
            d[key].append(i) 
        return list(d.values()) 

            
            
        
        