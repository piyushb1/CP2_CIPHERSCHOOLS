#include<bits/stdc++.h>
// #include<map>
using namespace std;

int main(){

	unordered_map<string,vector<string> > um;

	um["Aryan"].push_back("98191");
	um["Aryan"].push_back("98192");
	um["Aryan"].push_back("98193");


	um["Kartik"].push_back("98591");
	um["Prateek"].push_back("92192");
	um["Rohan"].push_back("98173");

	if(um.count("Rohan")!=0){
		for(auto n:um["Rohan"]){
			cout<<n<<endl;
		}
	}

	for(auto p:um){
		cout<<p.first<<endl;
		
		for(auto no:p.second){
			cout<<no<<endl;
		}
		cout<<endl;
	}
	
return 0;
}