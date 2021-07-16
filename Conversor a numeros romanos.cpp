#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <sstream>

using namespace std;

void Cal(int num1), Menu();

int main(){
	Menu();
	return 0;
}

void Menu(){
	
	int num = 0;
	char caracter;
	string numstr;
	stringstream ss;
	
	
	do{
			
			while(true){
			
			system("cls");
			system("Color 09");
			
			cout<<endl<<"Digite un numero: ";
			caracter = getch();
			
			while(caracter != 13){
				if(caracter != 8){
					if(caracter == 48 || caracter == 49 || caracter == 50 || caracter == 51 || caracter == 52 || caracter == 53 || caracter == 54 || caracter == 55 || caracter == 56 || caracter == 57){
						numstr.push_back(caracter);
						cout<<caracter;
					}
				} else {
					if(numstr.length() > 0){
						cout<<"\b \b";
						numstr = numstr.substr(0, numstr.length() - 1);
					}
				}
				caracter = getch();
			}
			
			ss << numstr;
			ss >> num;
			
			if(num >= 1){
				system("cls");
				cout<<endl<<" El numero "<<num<<", en numeros romanos es: ";
				Cal(num);
			} else {
				system("color 04");
				cout<<"\n Error inesperado, porfavor intentelo nuevamente.\n\n";
				
				system("pause");
				exit(0);
			}
			
		}
		
		
		
		
		cout<<"\n\n ";
		system("pause");
			
		}while(true);
}

void Cal(int num){
	int num1, M = 1000, D = 500, C = 100, millar, centenas, decenas, unidades;
	
	unidades = num%10;
		num /= 10;
		
		decenas = num%10;
		num /= 10;
		
		centenas = num%10;
		num /= 10;
		
		millar = num%10;
		num /= 10;
		
		switch(millar){
			case 1: cout<<"M"; break;
			case 2: cout<<"MM"; break;
			case 3: cout<<"MMM"; break;
		}
		
		switch(centenas){
			case 1: cout<<"C"; break;
			case 2:	cout<<"CC"; break;
			case 3: cout<<"CCC"; break;
			case 4: cout<<"CD"; break;
			case 5: cout<<"D"; break;
			case 6: cout<<"DC"; break;
			case 7: cout<<"DCC"; break;
			case 8: cout<<"DCCC"; break;
			case 9: cout<<"CM"; break;
		}
		
		switch(decenas){
			case 1: cout<<"X"; break;
			case 2:	cout<<"XX"; break;
			case 3: cout<<"XXX"; break;
			case 4: cout<<"XL"; break;
			case 5: cout<<"L"; break;
			case 6: cout<<"LX"; break;
			case 7: cout<<"LXX"; break;
			case 8: cout<<"LXXX"; break;
			case 9: cout<<"XC"; break;
		}
		
		switch(unidades){
			case 1: cout<<"I"; break;
			case 2:	cout<<"II"<<endl; break;
			case 3: cout<<"III"<<endl; break;
			case 4: cout<<"IV"<<endl; break;
			case 5: cout<<"V"<<endl; break;
			case 6: cout<<"VI"<<endl; break;
			case 7: cout<<"VII"<<endl; break;
			case 8: cout<<"VIII"<<endl; break;
			case 9: cout<<"IX"<<endl; break;
		}
		cout<<endl<<endl;
		system("pause");
		Menu();
}
