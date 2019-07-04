#include <iostream>
#include <conio.h>
using namespace std;

void header(){
	cout<<"|=========================|"<<endl;
	cout<<"|INI ADALAH PROGRAM FUNGSI|"<<endl;
	cout<<"|=========================|"<<endl;
}

int tambah(int x,int y){
	return (x+y);
}

main(){
	int a,b,c;
	header();
	cout<<endl<<endl;
	cout<<"\tMASUKKAN NILAI A = ";cin>>a;
	cout<<"\tMASUKKAN NILAI B = ";cin>>b;
	c=tambah(a,b);
	cout<<"\tA + B = "<<c;
	getch();	
}
