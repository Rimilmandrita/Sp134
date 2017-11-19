#include<iostream>
#include<cstring>
using namespace std;
int main() {

string name;
char *p;
cout<<"Enter your name\n";
getline(cin,name);
int n=name.size();
p=&(name[0]);

for(int i=0;i<n;i++)
 { cout<<*(p+i);
 }
 cout<<endl;
 for (int i=0;i<n;i++)
  {  cout<<name[i];
  }
	return 0;

	}

	
