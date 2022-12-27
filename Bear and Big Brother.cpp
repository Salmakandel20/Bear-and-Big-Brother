#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
int LimakWeight,BobWeight,numberOfYear=0;
cin>>LimakWeight>>BobWeight;
while(LimakWeight<=BobWeight){
	LimakWeight*=3;
	BobWeight*=2;
	numberOfYear++;
	
}
cout<<numberOfYear;


}
