#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
	int answer = 0;
	sort(people.begin(), people.end()); // �������� ����
	int count = 0;

	while (people.size() > count)
	{
		int tmp = people.back();
		people.pop_back();
		//���� ū �� + ���� ���� �� ������ ��� ã�Ƴ���(greedy)
		if (tmp + people[count] <= limit)
		{
			++answer;
			++count;
		}
		else //�� �� �� �� �¿�� ���
			++answer;
	}
	return answer;
}