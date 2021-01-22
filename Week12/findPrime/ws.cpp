#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    vector <char> v;
    vector <int> v2;
    for (int i = 0; i < numbers.length(); i++) {
        v.push_back(numbers[i]);
    }

    sort(v.begin(), v.end());

    do {
        string a = "";
        for (int i = 0; i < v.size(); i++) {
            a += v[i]; //일부만 사용하는 경우도 생각해야 될 경우
            v2.push_back(stoi(a)); //일부만 사용하는 경우도 생각해야 될 경우
        }
    } while (next_permutation(v.begin(), v.end()));

    sort(v2.begin(), v2.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());

    for (int i = 0; i < v2.size(); i++) {
        if (isPrime(v2[i]))
            answer++;
    }
    return answer;
}