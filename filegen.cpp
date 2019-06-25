#include<bits/stdc++.h>
#include <fstream>
#include <string>
using namespace std;

int neg(int var) {
	return 0-var;
}

int main() {
	fstream f;
	f.open("a1.txt");
	long a;
	int i=0; 
  	int cl;
  	cin>>cl;
  	int var;
  	cin>>var;
  	for(int i=0;i<=cl;i++) {
  		f << "\n";
  		int ra = rand()%var + 0;
  		for(int j=0;j<=ra;j++) {
  			int y = 2*var;
  			int ran = rand()%y + (neg(var));
  			f << ran;
  			f << " ";
  		}
  		f << "0";
  	}
	f.close();
}