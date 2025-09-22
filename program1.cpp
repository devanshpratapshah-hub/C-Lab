#include<iostream>
#include<string>
using namespace std;
class travel {
	public:
	int package;
	string destination;
};
int main(){
	travel myobj;
	myobj.package=42424;
	myobj.destination="Kathmandu";
	cout<<"enter my destination:"<<myobj.destination<<"\n";
	cout<<"enter my package:"<<myobj.package;
}
