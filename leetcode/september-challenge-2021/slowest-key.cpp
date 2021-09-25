/* https://leetcode.com/problems/slowest-key/ */

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int len = keysPressed.size();
        unsigned int longestTime = releaseTimes[0];
        unsigned int time;
        char longestKey = keysPressed[0];

        for (int i = 1; i < len; i++) {
            time = releaseTimes[i] - releaseTimes[i - 1];

            if (time >= longestTime) {
                if (time == longestTime && (int)keysPressed[i] < (int)longestKey) {
                    continue;
                }
                longestKey = keysPressed[i];
                longestTime = time;
            }
        }

        return longestKey;
    }
};
