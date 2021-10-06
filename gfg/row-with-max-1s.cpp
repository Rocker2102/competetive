/* https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1 */

class Solution{
public:
	int rowWithMax1s(vector<vector<int>> arr, int n, int m) {
	    int maxCount = 0, index = -1;

	    for (int i = 0; i < n; i++) {
	        for (int j = 0; j < m; j++) {
	            if (arr[i][j] == 1) {
	                if (m - j > maxCount) {
	                    index = i;
	                    maxCount = m - j;
	                }
	                break;
	            }
	        }

	        if (maxCount == m) { break; }
	    }

	    return index;
	}
};
