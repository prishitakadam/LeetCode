class Solution {

int oddlen(vector<vector<int>> m){
    int sum = 0, n, start, end, middle;
    n = m.size();
    middle = (n+1)/2 - 1;
    start = 0;
    end = n-1;

    if(m.size() == 1){
        sum = sum + m[0][0];
    }
    else{
        for(int i=0; i<m.size(); i++){
            int*p = m[i].data();
            if(i < middle){
                sum = sum + p[start] + p[end];
                start += 1;
                end -= 1;
            }
            else if(i == middle){
                sum = sum + p[start];
                start -= 1;
                end += 1;
            }
            else{
                sum = sum + p[start] + p[end];
                start -= 1;
                end += 1;
            }
        }
    }
    
    return sum;
}

int evenlen(vector<vector<int>> m){
    int sum = 0, n, start, end, middle;
    n = m.size();
    middle = n/2;
    start = 0;
    end = n-1;
    
    for(int i = 0; i<m.size(); i++){
        int*p = m[i].data();
        if(i<middle-1){
            sum = sum + p[start] + p[end];
            start += 1;
            end -= 1;
        }
        else if(i == middle-1){
                sum = sum + p[start] + p[end];
        }
        else{
            sum = sum + p[start] + p[end];
            start -= 1;
            end += 1;
        }
    }
    
    return sum;
}

public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum;
        if(mat.size()%2 == 0){
            sum = evenlen(mat);
        }
        else{
            sum = oddlen(mat);
        }
        
        return sum;
        
    }
};
