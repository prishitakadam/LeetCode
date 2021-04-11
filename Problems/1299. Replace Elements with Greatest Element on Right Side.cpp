class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
       
        if(arr.size() == 1){
            return {-1};
        }
        else if(arr.size() == 2){
            return {arr[1], -1};
        }
        else{
                vector<int> ans;
                int* p = arr.data();
                int start = 0, p1 = start + 1, p2 = p1 + 1, temp;

                while(p1 < arr.size()){

                    temp = p[p1];
                    while(p2< arr.size()){
                        if(p[p2] > temp){
                            temp = p[p2];
                            p1 = p2;
                        }
                        p2 += 1;
                    }

                    ans.insert(ans.end(), (p1-start), p[p1]);
                    start = p1;
                    p1 = start + 1;
                    p2 = p1 + 1;
                }

                ans.insert(ans.end(), -1);

                return ans;
        }

    }
        
};
