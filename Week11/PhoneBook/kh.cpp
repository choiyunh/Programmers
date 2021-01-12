#include <cstring>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool comp(const string& s1, const string& s2) {

    if (s1.size() == s2.size()) 
        return s1 < s2;
    return s1.size() < s2.size(); 
}

bool solution(vector<string> phone_book) {
    bool answer = true;

    sort(phone_book.begin(), phone_book.end(), comp);

    for (int i = 0; i < phone_book.size(); i++) {
        for (int j = i+1; j < phone_book.size(); j++) {
            string check = phone_book[j].substr(0, phone_book[i].size());
            if (phone_book[i] == check) {
                return false;
            }
        }
    }
    return answer;
}


int main() {
    vector<string>phone_book = { "123", "789", "456" };
    sort(phone_book.begin(), phone_book.end(),comp);
    for (int i = 0; i < phone_book.size(); i++) {
        cout << phone_book[i] << endl;
    }
    cout<<solution(phone_book);

}
