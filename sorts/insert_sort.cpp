#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int i = 1; i < n; i++){
		int k = i;
		while(k > 0 && a[k - 1] > a[k]){
			swap(a[k - 1], a[k]);
			k--;
		}
	}

	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
