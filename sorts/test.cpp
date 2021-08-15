#include <bits/stdc++.h>
using namespace std;

void test(vector<int> a){
    a.push_back(3);
    return;
}

int main() {
	int n;
	cin >> n;
	vector<int> a;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

    test(a);


	for(int i = 0; i < n + 1; i++){
		cout << a[i] << " ";
	}
}
