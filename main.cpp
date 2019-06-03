#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums[0];
        int curr = max;

        for (int i = 1; i < nums.size(); ++i) {
          curr += nums[i];
          if (curr < nums[i]) {
            curr = nums[i];
          }
          max = curr > max ? curr : max;
        }
        return max;
    }
};

int main() {
  Solution S;

  // -2,1,-3,4,-1,2,1,-5,4
  // max = -2, curr = -2

  vector<int> v1{-2};
  cout << "-2? " << S.maxSubArray(v1) << endl;

  vector<int> v2{-2, 1};
  cout << "1? " << S.maxSubArray(v2) << endl;

  vector<int> v3{-2, 1, -3};
  cout << "1? " << S.maxSubArray(v3) << endl;

  vector<int> v4{-2, 1, -3, 4};
  cout << "4? " << S.maxSubArray(v4) << endl;

  vector<int> v10{-2,1,-3,4,-1,2,1,-5,4};
  cout << "6? " << S.maxSubArray(v10) << endl;

  cout << "Done" << endl;
}