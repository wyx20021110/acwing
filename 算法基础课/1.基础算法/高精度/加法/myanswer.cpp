#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> q3;
void f(vector<int> q1, vector<int> q2)
{
    if (q1.size() > q2.size())
    {
        f(q2, q1);
        return;
    }
    int k = 0;
    for (int i = 0; i < q2.size(); i++)
    {
        if (i < q1.size())
        {
            q3.push_back((q1[i] + q2[i] + k) % 10);
            k = (k + q1[i] + q2[i]) / 10;
        }
        else
        {
            q3.push_back((k + q2[i]) % 10);
            k = (k + q2[i]) / 10;
        }
    }
    if (k)
        q3.push_back(k);
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> q1, q2;
    for (int i = s1.length() - 1; i >= 0; i--)
        q1.push_back(s1[i] - '0');
    for (int i = s2.length() - 1; i >= 0; i--)
        q2.push_back(s2[i] - '0');
    f(q1, q2);
    for (int i = q3.size() - 1; i >= 0; i--)
        printf("%d", q3[i]);
}