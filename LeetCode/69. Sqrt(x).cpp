class Solution {
public:
  int mySqrt(int x) {
    if (x == 0) return 0;
    if(x==1)return 1;
    int left = 1, right = x;
    while (left < right) {
      int mid = left + (right - left) / 2;
      if (mid <= x / mid) {
        left = mid + 1;
      } else {
        right = mid;
      }
    }
    return right - 1;
  }
};

/*
#include <cmath>

class Solution {
public:
  int mySqrt(int x) {
    return sqrt(x);
  }
};
*/