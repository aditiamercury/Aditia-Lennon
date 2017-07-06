/*	TUGAS ARRAY
*/	

#include <iostream>
using namespace std;

void Array(){
	cout << "Nama	: Aditia Kurniawan"<<endl;
	cout << "NPM	: 16.111.155"<<endl;
	cout << "Kelas	: TIF-RM 16C"<<endl;
	
	char hrf[4]; 
	char a; 
	int s=0, sum=0;
	//ALGORITMA
	
	while(s<= 3){
			cout<<"+---+\n";
			cout<<"> ";cin>>hrf[s];  
			s++;
	}
	
	for(int x=0; x<=3; x++ ){
	cout<<"huruf masukan ke-"<<x<<": "<<hrf[x]<<"\n";
	}
	
	cout<<"masukan huruf penentu \n";
	cin>>a;
	
	for(int s=0; s<=3; s++ ){
	if(a == hrf[s]){int v=1; sum+=v; }
	}
	
	
	cout<<"jumlah huruf "<<a<<" : sebanyak: "<<sum;
	
}