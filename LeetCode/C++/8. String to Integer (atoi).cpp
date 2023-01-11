#include <climits>
#include <string>

class Solution {
public:
  int myAtoi(std::string str) {
    int i = 0;
    while (i < str.size() && isspace(str[i])) ++i;
    int sign = 1;
    if (i < str.size() && str[i] == '+') {
      ++i;
    } else if (i < str.size() && str[i] == '-') {
      sign = -1;
      ++i;
    }
    int result = 0;
    while (i < str.size() && isdigit(str[i])) {
      int digit = str[i] - '0';
      if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
        return sign == 1 ? INT_MAX : INT_MIN;
      }
      result = result * 10 + digit;
      ++i;
    }
    return sign * result;
  }
};