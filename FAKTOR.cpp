#include <iostream>

using namespace std;

int main (){
	
	int x,b,T;
	int Y = 0; 
	int B = 0;
	
	cin>>T;
	
	if(T >= 1 && T <= 100){
		
		int faktorr[T];
	
		for (int i = 0; i < T ; i++){
			cin >> x;
			if(x >= 1 && x <= 1000000000){
				for(int j=x; j > 0;j--){
					if(x%j == 0){
						Y++;
					}
				}
				faktorr[i]=Y;
				Y=0;
			}
			else{
				exit(0);	
			}
		}
		for (int i = 0; i < T ; i++){
			cout << "Case #" << i+1 << " : " << faktorr[i]<<endl;
		]
	}
	
	else{
	}
	
	return 0;
}
