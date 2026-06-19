class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int i = 0; 
        int size = flowerbed.size();

        while (i < size) {
           
            if (flowerbed[i] == 0) {
                
                bool leftEmpty = (i == 0 || flowerbed[i - 1] == 0);
                
                bool rightEmpty = (i == size - 1 || flowerbed[i + 1] == 0);

                if (leftEmpty && rightEmpty) {
                    flowerbed[i] = 1; 
                    count++;
                    i += 2;           
                    continue;
                }
            }
            i++; 
        }
        
        return count >= n;
    }
};