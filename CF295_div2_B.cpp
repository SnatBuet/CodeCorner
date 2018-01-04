/*

int main() {
	int n, m;
	cin >> n>> m;
	if (n >= m) {
		cout << n - m << endl;
	}
	else {
		int steps = 0;
		int temp = m;
		while (temp!=n) {
			if (temp < n) {
				steps+=(n-temp);
				break;
			}
			int num = temp / 2;
			if (temp % 2) {
				num++;
			}
			steps += (num * 2) - temp;
			steps++;
			temp = num;
		}
		cout << steps << endl;
	}
	return 0;
}*/