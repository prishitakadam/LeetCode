class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        vector<int>*p = points.data();
    
        int i = 0, sum = 0;
        int len = points.size();


        while(i<len-1){
            if(abs(p[i+1][0] - p[i][0]) > abs(p[i+1][1] - p[i][1])){
                sum += abs(p[i+1][0] - p[i][0]);
            }
            else{
                sum += abs(p[i+1][1] - p[i][1]);
            }

            i += 1;
        }
        
        return sum;
    }
};


//Naive Approch
// class Solution {
// public:
//     int minTimeToVisitAllPoints(vector<vector<int>>& points) {
//         int i = 1, sum = 0;
//         int len = points.size();
//         int t1 = points[0][0], t2 = points[0][1];

//         while(t1 != points[len-1][0] || t2 != points[len-1][1] || i < len){
//             if((points[i][0] - t1 > 0) && (points[i][1] - t2 > 0)){
//                 t1 += 1;
//                 t2 += 1;
//                 sum += 1;
//             }
//             else if((points[i][0] - t1 < 0) && (points[i][1] - t2 < 0)){
//                 t1 -= 1;
//                 t2 -= 1;
//                 sum += 1;
//             }
//             else if((points[i][0] == t1) && (points[i][1] - t2 > 0)){
//                 t2 += 1;
//                 sum += 1;
//             }
//             else if((points[i][1] == t2) && (points[i][0] - t1 > 0)){
//                 t1 += 1;
//                 sum += 1;
//             }
//             else if((points[i][0] == t1) && (points[i][1] - t2 < 0)){
//                 t2 -= 1;
//                 sum += 1;
//             }
//             else if((points[i][1] == t2) && (points[i][0] - t1 < 0)){
//                 t1 -= 1;
//                 sum += 1;
//             }
//             else if((points[i][0] - t1 > 0) && (points[i][1] - t2 < 0)){
//                 t1 += 1;
//                 t2 -= 1;
//                 sum += 1;
//             }
//             else if((points[i][0] - t1 < 0) && (points[i][1] - t2 > 0)){
//                 t1 -= 1;
//                 t2 += 1;
//                 sum += 1;
//             }

//             if((points[i][0] == t1) && (points[i][1] == t2)){
//                 i += 1;
//             }

//         }

//         return sum;
//     }
// };
