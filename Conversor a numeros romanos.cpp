#include <iostream>
#include <stdlib.h>

using namespace std;

void Cal(int num1), Menu();

int main(){
	Menu();
	return 0;
}

void Menu(){
	
	int i = 1, num1 = 0;
	
	do{
			
			while(i == 1){
			
			system("cls");
			system("Color 09");
			
			cout<<endl<<"Digite un numero: ";
			cin>>num1;
			
			if(num1 >= 1){
				i++;
				system("cls");
				cout<<endl<<" El numero "<<num1<<", en numeros romanos es: ";
				Cal(num1);
			} else {
				system("color 04");
				cout<<"\n Error inesperado, porfavor intentelo nuevamente.\n\n";
				
				system("pause");
				exit(0);
			}
			
		}
		
		
		cout<<"\n\n ";
		system("pause");
		i--;
			
		}while(1 == 1);
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
}
