#include <iostream>
#include <string> 
using namespace std;

int luas_persegi( int x){
	int hasil;
	hasil = x*x;
	
	return hasil;
}

int luas_persegi_panjang (int p , int l){
	int hasil;
	hasil = p*l;
	
	return hasil;
}

double luas_segitiga_sama_sisi (double a , double t){
	double hasil;
	hasil = (a*t)/2 ;
	
	return hasil;
}

double luas_lingkaran (int r){
	double hasil;
	hasil = 3.14*(r^2) ;
	
	return hasil;
}

int luas_trapesium (int a , int b, int t){
	int hasil;
	hasil = (a+b)*t/2;
	
	return hasil;
}

int keliling_persegi_panjang (int p , int l){
	int hasil;
	hasil = (2*p)+(2*l);
	
	return hasil;	
	
}
int keliling_persegi(int x){
	int hasil;
	hasil = 4*x;
	
	return hasil;
}

int keliling_segitiga_sama_sisi (int a , int t){
	int hasil;
	hasil = 3*a;
	
	return hasil;
}
double keliling_lingkaran(int r){
	double hasil;
	hasil = 2*3.14*r;
	
	return hasil;
}

double keliling_trapesium (int ab , int bc , int cd , int da){
	double hasil;
	hasil = ab+bc+cd+da;
	
	return hasil;
}

int main(){
	int x; 
	int s;
	int p;
	int l;
	int a;
	int t;
	int r;
	int y;	
	int b;	
	int ab;
	int bc;
	int cd;
	int da;
	string z;
	
	menu:	
		cout<<"RUMUS \n";
		cout<<"1. Persegi \n";
		cout<<"2. Persegi Panjang\n";
		cout<<"3. Segitiga \n";
		cout<<"4. Lingkaran \n";
		cout<<"5. Trapesium \n";
		cout<<"Masukkan Pilihan : ";
		cin>>x;
		if (x == 1){
			cout<<"Masukan s : ";
			cin>>s;
			cout<<"Luas = "<<luas_persegi(s)<<"\n";
			cout<<"Keliling = "<<keliling_persegi(s)<<"\n" "\n";
			cout<<"Apakah mau menghitung lagi? (Y/N) \n";
			cin>>z;
			
			if (z=="y" or z=="Y"){
				system("CLS");
				goto menu;			
			}
			
			else if(z=="n" or z=="N"){
				system("CLS");
				cout<<"Terimakasih!";
			}
			
			else{
				exit(0);
			}
		
			
		}
		else if(x == 2){
			cout<<"Masukan P : ";
			cin>>p;
			cout<<"Masukan L : ";
			cin>>l;
			cout<<"Luas = "<<luas_persegi_panjang(p,l)<<"\n";
			cout<<"Keliling = "<<keliling_persegi_panjang(p,l)<<"\n" "\n";
				cout<<"Apakah mau menghitung lagi? (Y/N) \n";
			cin>>z;
			
			if (z=="y" or z=="Y"){
				system("CLS");
				goto menu;			
			}
			
			else if(z=="n" or z=="N"){
				system("CLS");
				cout<<"Terimakasih!";
			}
			
			else{
				exit(0);
			}
		}
		
		else if (x == 3){
			cout<<"Masukan Alas : ";
			cin>>a;
			cout<<"Masukan Tinggi : ";
			cin>>t;
			cout<<"Luas = "<<luas_segitiga_sama_sisi(a,t)<<"\n";
			cout<<"Keliling = "<<keliling_segitiga_sama_sisi(a,t)<<"\n" "\n";
				cout<<"Apakah mau menghitung lagi? (Y/N) \n";
			cin>>z;
			
			if (z=="y" or z=="Y"){
				system("CLS");
				goto menu;			
			}
			
			else if(z=="n" or z=="N"){
				system("CLS");
				cout<<"Terimakasih!";
			}
			
			else{
				exit(0);
			}
		}
			
			
		else if (x == 4){
			cout<<"Masukan Jari Jari : ";
			cin>>r;
			cout<<"Luas = "<<luas_lingkaran(r)<<"\n";
			cout<<"Keliling = "<<keliling_lingkaran(r)<<"\n" "\n";
				cout<<"Apakah mau menghitung lagi? (Y/N) \n";
			cin>>z;
			
			if (z=="y" or z=="Y"){
				system("CLS");
				goto menu;			
			}
			
			else if(z=="n" or z=="N"){
				system("CLS");
				cout<<"Terimakasih!";
			}
			
			else{
				exit(0);
			}
		}
		
		else if (x == 5){
			t:
				cout<<"1.Luas \n";
				cout<<"2.Keliling \n";
				cout<<"Pilih Rumus : ";
				cin>>y;
				if (y == 1){
					cout<<"Masukan A : ";
					cin>>a;
					cout<<"Masukan B : ";
					cin>>b;
					cout<<"Masukan T : ";
					cin>>t;
					cout<<"Luas = "<<luas_trapesium(a,b,t)<<"\n" "\n";
					goto t;
				}
			
				else if (y == 2){
					cout<<"Masukan AB : ";
					cin>>ab;
					cout<<"Masukan BC : ";
					cin>>bc;
					cout<<"Masukan CD : ";
					cin>>cd;
					cout<<"Masukan DA : ";
					cin>>da;
					cout<<"Keliling = "<<keliling_trapesium(ab,bc,cd,da)<<"\n" "\n";
					goto t;
				}
				
				else{
					cout<<"\nMaaf, pilihan tidak ada! \n \n";
					goto t;
				}
		}
		else{
			cout<<"\nMaaf, pilihan tidak ada! \n \n ";
			goto menu;
		}
	
	
	return 0;
}

