#include <string>
#include <vector>
#include <cmath>
using namespace std;

void solve(double a, double b, double c,int &x,int &y) {
    x = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
    y = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
}
vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int x, y;
    solve(1, (brown + 4) / 2, brown + yellow, x, y);
    answer.push_back(-x);
    answer.push_back(-y);
    return answer;
}