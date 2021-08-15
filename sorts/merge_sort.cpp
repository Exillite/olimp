#include <bits/stdc++.h>
using namespace std;

vector<int> s;

vector<int> mergee(vector<int> a, vector<int> b){
    vector<int> c(a.size() + b.size());
    int i = 0, k = 0, n = 0; // i - A, k - B, n - C
    while(i < a.size() && k < b.size()){
        if(a[i] <= b[k]){
            c[n] = a[i];
            i++;
            n++;
        } else {
            c[n] = b[k];
            k++;
            n++;
        }
    }
    while(i < a.size()){
        c[n] = a[i];
        i++;
        n++;
    }
    while(k < b.size()){
        c[n] = b[k];
        k++;
        n++;
    }
    return c;
}

void merge_sort(vector<int> a){
    if(a.size() <= 1)
        return;
    int middle = a.size() / 2;
    vector<int> l;
    for(int i = 0; i < middle; i++){
        l.push_back(a[i]);
    }
    vector<int> r;
    for(int i = middle; i < a.size(); i++){
        r.push_back(a[i]);
    }
    l = merge_sort(l);
    l = merge_sort(r);
    vector<int> c;
    c = mergee(l,r);
    for(int i = 0; i < a.size(); i++)
        s[i] = c[i];
    return;
}

int main() {
	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> s[i];
	}

    merge_sort(s);

	for(int i = 0; i < n; i++){
		cout << s[i] << " ";
	}
}

