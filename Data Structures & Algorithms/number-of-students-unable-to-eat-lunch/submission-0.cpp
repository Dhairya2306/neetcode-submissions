class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count_0 = 0;
        int count_1 = 0; 
        
       
        for (int preference : students) {
            if (preference == 0) count_0++;
            else count_1++;
        }
        
        
        for (int sandwich : sandwiches) {
            if (sandwich == 0) {
                if (count_0 > 0) {
                    count_0--; 
                } else {
                   
                    break; 
                }
            } else { 
                if (count_1 > 0) {
                    count_1--; 
                } else {
                    
                    break; 
                }
            }
        }
        
       
        return count_0 + count_1;
    }
};