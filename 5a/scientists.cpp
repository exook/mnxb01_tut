#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

//single comment

	vector<string> list;
	for(size_t i = 0; i < list.size(); ++i){ cout<<list.at(i)<<endl;}
	list.push_back("Lovelace");
	list.push_back("Meitner");
	list.push_back("Wu");
	list.push_back("Lamarr");
	for(size_t i = 0; i < list.size(); ++i){ cout<<list.at(i)<<endl;}

	return 0;
}
