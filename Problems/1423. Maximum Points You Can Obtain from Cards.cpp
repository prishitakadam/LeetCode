class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxPoints = 0, tempPoints = 0, i = 0, j = cardPoints.size()-1, limit = k;
        
        while(k>0){
            tempPoints += cardPoints[i];
            i++;
            k--;
        }
        
        if(maxPoints < tempPoints)
            maxPoints = tempPoints;
        
        while(j > cardPoints.size()-limit-1){
            tempPoints -= cardPoints[i-1];
            tempPoints += cardPoints[j];
            if(maxPoints < tempPoints)
                maxPoints = tempPoints;
            i -= 1;
            j -= 1;
        }
        return maxPoints;
    }
};
