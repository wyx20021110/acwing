#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> f(vector<int> &q1, vector<int> &q2)
{
}
int main()
{
    string s1, s2;
    vector<int> q1, q2;
    cin >> s1 >> s2;
    for (int i = s1.length() - 1; i >= 0; i--)
        q1.push_back(s1[i] - '0');
    for (int i = s2.length() - 1; i >= 0; i--)
        q2.push_back(s2[i] - '0');
    auto q3 = f(q1, q2);
}