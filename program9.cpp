#include<iostream>
#include<string>
using namespace std;
class travel{
	public:
		void myfunction() {
			cout<<"I am Travelling to Nepal.";
		}
};
class Destination: public travel {
};
class Place: public Destination{
};
int main (){
	travel myobj;
	myobj.myfunction();
	return 0;
} 
