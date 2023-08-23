class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> max_heap (stones.begin(), stones.end()); 
        int one, two; 

        while (max_heap.size() > 1)
        {
            one = max_heap.top(); 
            max_heap.pop(); 
            two = max_heap.top(); 
            max_heap.pop(); 

            if (one != two)
            {
                max_heap.push(abs(one - two)); 
            }
        }

        return (max_heap.empty() ? 0 : max_heap.top()); 
    }
};
