/*
��蕶
�V�J��AtCoDeer����̓y���L������܂ł�3�����܂����B
���ƂƂ��������y���L�̐F�� a , ����������y���L�̐F�� b , �����������y���L�̐F�� c �ł��B
�e�y���L�̐F��1�ȏ�100�ȉ��̐����ŕ\����܂��B
AtCoDeer����͂킷���ڂ��Ȃ��߁A�����F�̃y���L�𔃂��Ă��܂��Ă��邱�Ƃ�����܂��B
AtCoDeer���񂪔������y���L�̐F�̎�ނ̌��������Ă����Ă��������B
*/

#include<iostream>
#include<vector>
#include<algorithm>

const int num = 3;
int main() {
	int target,times=1;
	std::vector<int> day;  //�����ł��ł���悤�Ɋg��������
	day.resize(num);

	for (int i = 0; i < day.size(); i++) {
		std::cin>>day[i];
	}

	std::sort(day.begin(), day.end());

	target = day[0];

	for (int j = 1; j < day.size(); j++) {
		if (target < day[j]) {
			target = day[j];
			times++;
		}
	}

	std::cout << times << std::endl;

	return 0;
}