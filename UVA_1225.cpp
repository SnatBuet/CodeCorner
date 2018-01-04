#include<vector>
#include<iostream>
#include<queue>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<cstdio>
#include<stack>
#include<cmath>
#include<utility>
#include<list>
#include <string>
#include<map>
#define ll long long
#define ull unsigned long long
#define mod 1000000007
#define PI acos(-1.0)
#define inf 1<<30
#define DI(n) int n;scanf("%d",&n)
#define DII(a,b) int a,b;scanf("%d %d",&a,&b)
#define DIII(a,b,c) int a,b,c;scanf("%d %d %d",&a,&b,&c)
using namespace std;
int arr[11];

int main() {
	freopen("input.txt", "r", stdin);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		memset(arr, 0, sizeof(arr));
		int n;
		cin >> n;
		int h = 1,l=0,m=0,p =0,q = 0;
		for (int j = 1; j <= n; j++) {
			if (h > 9) {
				l++;
				h = 0;
			}
			if (l > 9) {
				m++;
				l = 0;
			}
			if (m > 9) {
				p++;
				m = 0;
			}
			if (p > 9) {
				q++;
				p = 0;
			}
			if (j >= 10000) {
				arr[q]++;
			}
			if (j >= 1000) {
				arr[p]++;
			}
			if (j >= 100) {
				arr[m]++;
			}
			if (j>=10) {
				arr[l]++;
			}
			arr[h++]++;
		}
		for (int j = 0; j < 9; j++) {
			cout << arr[j] << " ";
		}
		cout << arr[9];
		cout << endl;
	}
	return 0;
}