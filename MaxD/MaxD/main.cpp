#include <iostream>
#include <fstream>
using namespace std;

ifstream f("in.in");
ofstream g("out.out");

int min = 9, nrdiv, contor=1,n,n1,maxdivs = 1;

int countDivs(int x) {
	int cnt = 0;
	for (int i = 1; i <= sqrt(x); i++) {
		if (x % i == 0) {
			if (x / i == i)
				cnt++;
			else
				cnt = cnt + 2;
		}
	}
	return cnt;
}

int main() {
	
	f >> n;
	f >> n1;

	for (int i = n; i < n1; i++) {
		//arr[i] = i;
		if (countDivs(i) > maxdivs) {
			maxdivs = countDivs(i);
			nrdiv = countDivs(i);
			min = i;
		}
	}

	for (int i = n; i < n1; i++) {
		if (countDivs(min) == countDivs(i)) {
			contor++;
		}
	}


	g << min << " "<< nrdiv << " "<< contor;

	return 0;
}