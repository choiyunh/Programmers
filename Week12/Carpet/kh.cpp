#include <string>
#include <vector>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    int w;
    for (int h = 3;; h++) {
        if (!(sum % h)) {
            w = sum / h;
            if ((h - 2) * (w - 2) == yellow) {
                answer.push_back(w);
                answer.push_back(h);
                break;
            }
        }
    }
    return answer;
}
