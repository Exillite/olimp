#include <iostream>
using namespace std;

int main() {
	int n, max = -2000000000, ind;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int i = n - 1; i >= 0; i--){
		for(int j = 0; j < i + 1; j++){
			if(max < a[j]){
				max = a[j];
				ind = j;
			}
		}
		swap(a[i], a[ind]);
		max = -2000000000;
	}

	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
