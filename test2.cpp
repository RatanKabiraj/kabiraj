#include<iostream>
using namespace std;
int main()

{
	int a;
	char m;
	cout<<"Enter the Mark :";
    cin>>a;
	if(a>=90 && a<=100){m='A';}
	else if(a>=80 && a<=90){m='B';}
	else if(a>=70 && a<=80){m='C';}
	else if (a>100){m='0'}{
		m='F';	
	}
	cout<<"Result :"<<m<<endl;
	return 0;
}