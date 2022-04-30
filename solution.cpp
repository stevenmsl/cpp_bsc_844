#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <stack>
#include <string>
#include <sstream>
using namespace sol844;
using namespace std;

/*takeaways
  - use stack handle backspacing

*/
string Solution::backspace(string &s)
{
  /*use string as a stack */
  string result;
  for (auto c : s)
    if (c != '#')
      result.push_back(c);
    else if (!result.empty())
      result.pop_back();
  return result;
}

bool Solution::compare(string A, string B)
{
  return backspace(A) == backspace(B);
}