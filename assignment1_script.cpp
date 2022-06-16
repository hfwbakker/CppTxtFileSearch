#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

	// read file and write lines to array
	string line;
	int count = 0;
	string colour[5];
	ifstream myfile("file.txt");
	if(myfile.is_open()){
		while(getline(myfile,line)){
			cout << "line " << count << ": " << line << '\n';
			colour[count] = line;
			count++;
		}
		myfile.close();
	}
	else cout << "Unable to open file";

	// convert array to lowercase strings

	// sort array compare ASCII values
	for(int i = 0; i < sizeof(colour)/sizeof(colour[0]); i++){
		cout << colour[i] << endl;;
	};

	if(colour[0][0] > colour[2][0]){
		cout << colour[0][0] << " is larger than " << colour[2][0] << endl;
	} else {
		cout << colour[0][0] << "is smaller than " << colour[2][0] << endl;
	};	

	return 0;

}
