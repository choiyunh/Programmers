#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool prime(int num) {
    if (num < 2) return false;

    for (int i = 2; i <= sqrt(num); i++) 
        if (num % i == 0) return false;
    return true;
}

int solution(string numbers) {
    int answer = 0;
    vector<char>num;
    vector<int>nums;

    for (int i = 0; i < numbers.size(); i++)
        num.push_back(numbers[i]);
    sort(num.begin(), num.end());

    do {
        string temp = "";
        for (int i = 0; i < num.size(); i++) {
            temp.push_back(num[i]);
            nums.push_back(stoi(temp));
        }
    } while (next_permutation(num.begin(), num.end()));

    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    for (int i = 0; i < nums.size(); i++)
        if (prime(nums[i]))
            answer++;

    return answer;
}