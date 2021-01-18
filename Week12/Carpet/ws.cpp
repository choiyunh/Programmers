#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int flag = 0;
    for (int i = 3;; i++) {
        for (int j = 3; j <= i; j++) {
            if (i + j == brown / 2 + 2 && (i - 2) * (j - 2) == yellow) {
                answer.push_back(i);
                answer.push_back(j);
                flag = 1;
                break;
            }
        }
        if (flag)
            break;
    }
    return answer;
}