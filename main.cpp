#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol844;

/*
Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".
*/
tuple<string, string, bool>
testFixture1()
{
  return make_tuple("ab#c", "ad#c", true);
}

/*
Input: S = "ab##", T = "c#d#"
Output: true
Explanation: Both S and T become "".
*/
tuple<string, string, bool>
testFixture2()
{
  return make_tuple("ab##", "c#d#", true);
}

/*
Input: S = "a##c", T = "#a#c"
Output: true
Explanation: Both S and T become "c".
*/
tuple<string, string, bool>
testFixture3()
{
  return make_tuple("a##c", "#a#c", true);
}

/*
Input: S = "a#c", T = "b"
Output: false
Explanation: S becomes "c" while T becomes "b".
*/
tuple<string, string, bool>
testFixture4()
{
  return make_tuple("a#c", "b", false);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  cout << "Expect to see " << get<2>(f) << ": " << sol.compare(get<0>(f), get<1>(f)) << endl;
}
void test2()
{
  auto f = testFixture2();
  Solution sol;
  cout << "Expect to see " << get<2>(f) << ": " << sol.compare(get<0>(f), get<1>(f)) << endl;
}
void test3()
{
  auto f = testFixture3();
  Solution sol;
  cout << "Expect to see " << get<2>(f) << ": " << sol.compare(get<0>(f), get<1>(f)) << endl;
}
void test4()
{
  auto f = testFixture4();
  Solution sol;
  cout << "Expect to see " << get<2>(f) << ": " << sol.compare(get<0>(f), get<1>(f)) << endl;
}

main()
{
  test1();
  test2();
  test3();
  test4();
  return 0;
}