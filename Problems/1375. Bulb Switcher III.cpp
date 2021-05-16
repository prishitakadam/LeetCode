//Optimized
class Solution {
public:
    double sum(double n){
        return (n*(n+1))/2;
    }
        
    int numTimesAllBlue(vector<int>& light) {
        int moments = 0;
        double current = 0;

        for(double i=0; i<light.size(); i++){
            current += light[i];
            if(current == sum(i+1))
                moments++;
        }
        return moments;
    }
};


//Naive
class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        vector<int> bulbs(light.size(), 0);
        int moments = 0, blue = 0, yellow = 0, temp=0;
        
        for(int i=0; i<light.size(); i++){
            if(light[i] == 1){
                bulbs[light[i]-1] += 2;
                blue += 1;
            }
            else{
                if((bulbs[light[i]-2]) == 2){
                    bulbs[light[i]-1] += 2;
                    blue += 1;
                }
                else{
                    bulbs[light[i]-1]++;
                    yellow += 1;
                }
            }
            
            temp = 1;
            if(light[i] != light.size()){
                while(bulbs[light[i]-1+temp] == 1){
                    bulbs[light[i]-1+temp]++;
                    yellow -= 1;
                    blue += 1;
                    temp += 1;
                    if(light[i]-1+temp > light.size()-1)
                        break;
                }
            }
            
            
            if(yellow == 0)
                moments += 1;
        }

        return moments;
    }
};
