
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_set>
#include <string>
#include <stack>

using namespace std;
namespace sol844
{

  class Solution
  {
  private:
    string backspace(string &s);

  public:
    bool compare(string A, string B);
  };
}
#endif