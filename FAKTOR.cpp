#include <iostream>

using namespace std;

int main (){
	
	int x,b,T;
	int Y = 0; 
	int B = 0;
	
	cin>>T;;
	
	int faktorr[T];

	for (int i = 0; i < T ; i++){
		cin >> x;
		for(int j=x; j > 0;j--){
			if(x%j == 0){
				Y++;
			}
		}
		faktorr[i]=Y;
		Y=0;
	}
	for (int i = 0; i < T ; i++){
		cout << "Case #" << i+1 << " : " << faktorr[i]<<endl;
	}

	
	return 0;
}
