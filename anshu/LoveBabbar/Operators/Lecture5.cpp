//  LeetCode question 1281

// class Solution {
// public:
//     int subtractProductAndSum(int n) {
//         int sum = 0 ; 
//         int pro =1 ; 
//         int num = n ;

//         while(num>0){
//             int val;
//             val = num % 10 ;
//             sum = val + sum ; 
//             pro = val * pro ; 
//             num = num / 10 ; 
//         }

//         return (pro - sum ); 
//     }
// };

