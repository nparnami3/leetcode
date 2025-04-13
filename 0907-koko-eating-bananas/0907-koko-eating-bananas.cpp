class Solution {
public:
     bool canEat(vector<int>& piles, int h, int speed) {
        int time = 0;
        for (int pile : piles) {
            time += (pile + speed - 1) / speed;
        }
        return time <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element(piles.begin(), piles.end());
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canEat(piles, h, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    
    }
};