#include<iostream>
using namespace std;

int main() {
	int a;
	
	cout<<"Ingrese un numero para generar una tabla de multiplicar"<<endl;
	cin>>a;
	
	for (int i = 1; i <= 20 ; i++) {
	cout<<a<<" * "<<i<<" = "<< a * i<<endl;	
	}
	return 0;
}