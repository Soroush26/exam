#include <iostream>
#include <fstream>
#include <math.h>
using namespace std; 
int main()
{
string username;
int pass;
string j;
string a;
cout<<"enter submit or login:";
cin>>a;
if(a=="submit"){
	cout<<"enter your user name : ";
cin>>username;	
cout<<"enter your password : ";
cin>>pass;	
}	

ifstream sr1("e:\\user name.txt");
	sr1>>j;
while(sr1.eof()){
	sr1>>j;
}

if(username!=j){
	ofstream sr2("d:\\user1.dat");
	sr2<<username;
	ofstream sr3("d:\\pass1.dat");
	sr3<<pass;
}	
else{
	cout<<"\n"<< "Previously used."<<"\n"<<" please choose an other user name";
	 
	exit(0);

}
	return 0;
}