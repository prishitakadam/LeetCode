class Solution(object):
    def findBuildings(self, heights):
        """
        :type heights: List[int]
        :rtype: List[int]
        """
        oceanView = []
        maxHeight = -1
        counter = len(heights) - 1
        
        for i in reversed(heights):
            if i > maxHeight:
                oceanView.insert(0, counter)
            maxHeight = max(maxHeight, i)
            counter = counter - 1
        
        return oceanView
