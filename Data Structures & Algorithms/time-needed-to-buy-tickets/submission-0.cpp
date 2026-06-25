class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count = 0;
        int i = 0;
        int n = tickets.size();
        
        // Loop runs until person k has 0 tickets left
        while (tickets[k] > 0) {
            // Only process if the current person actually needs a ticket
            if (tickets[i] > 0) {
                tickets[i]--; // Buy 1 ticket
                count++;      // It takes 1 second
            }
            
            // Move to the next person circularly
            i = (i + 1) % n;
        }
        
        return count;
    }
};