/*
問題文
シカのAtCoDeerくんはペンキをこれまでに3つ買いました。
おととい買ったペンキの色は a , 昨日買ったペンキの色は b , 今日買ったペンキの色は c です。
各ペンキの色は1以上100以下の整数で表されます。
AtCoDeerくんはわすれんぼうなため、同じ色のペンキを買ってしまっていることがあります。
AtCoDeerくんが買ったペンキの色の種類の個数を教えてあげてください。
*/

#include<iostream>
#include<vector>
#include<algorithm>

const int num = 3;
int main() {
	int target,times=1;
	std::vector<int> day;  //何日でもできるように拡張したい
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