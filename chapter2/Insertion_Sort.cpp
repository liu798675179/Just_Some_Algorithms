#include <random>
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void Insertion_Sort(vector<long long> &v1) {
	long long k;
	long long temp_key;
	for (auto j = 1; j != v1.size(); ++j) {
		temp_key = v1[j];
		k = j - 1;
		while (k >= 0 && v1[k] > temp_key) {
			v1[k + 1] = v1[k];
			--k;
		}
		v1[k + 1] = temp_key;
	}
}

vector<long long> Random() {
	default_random_engine               e(time(nullptr));
	uniform_int_distribution<long long> u(-100000000, 100000000);
	vector<long long>                   v1;

	for (auto i = 0; i != 10000; ++i) {
		v1.push_back(u(e));
	}

	return v1;
}

int main() {
	auto v1 = Random();
	Insertion_Sort(v1);

	for (auto &temp : v1) {
		cout << temp << " ";
	}

	return 0;
}
