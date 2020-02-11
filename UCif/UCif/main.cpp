#include <iostream>
#include <fstream>
using namespace std;

ifstream f("in.in");
ofstream g("out.out");

int n,s,sz;

int main() {
	
	f >> n;
	
	for (int i = 1; i <= n; i++) {
		s = s + pow(i, i); 
	}

	sz = s % 10;

	g << sz;

	return 0;
}