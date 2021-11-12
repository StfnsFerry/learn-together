#include <string.h>
#include <iostream>
using namespace std;


int main(){
    char s[1000];
    int x;
    
    cin.getline(s,sizeof(s));
    
    x = strlen(s);
   	
   	cout << "Case1 : ";
    for (int i=x-1; i>=0; i--){
		cout << (int)s[i]%2;
	}
	
    return (0);
}
