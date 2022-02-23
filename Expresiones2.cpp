#include <stdio.h>
#include <conio.h>
#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,x,y,w,r1,r2,r3;
    cout << "\t\tElige una opcion :D \n";
    cout << "1\t¿los datos a, b, c y d son iguales? \n";
    cout << "2\t¿x < y < w? \n";
    cout << "3\t¿el semestre está entre 1 y 9? \n";
    cout << "4\t¿los datos r1, r2 y r3 son diferentes? \n";
    cout << "6\t¿el grupo es A o B? \n";
    cout << "6\t¿el número es par o es menor que 3? \n";
    cout << "7\t¿el número es impar o es mayor o igual que 12? \n";
    cout << "8\t¿el nombre es Pepe o Luis o Mario? \n";
    cout << "9\tNo es cierto que x es menor que 7 \n";
    cout << "10\tLa variable y no es mayor o igual que 3.2 \n";
 
    int opcion = 0;
    cin >> opcion;

    switch(opcion)
    {
        case 1: cout << "¿Los datos a,b,c y d son iguales?";
        cout<<"\nNumero A: ";
        cin>>a;
        cout<<"\nNumero B: ";
        cin>>b;
        cout<<"\nNumero C: ";
        cin>>c;
        cout<<"\nNumero D: ";
        cin>>d;
        if(a==b&&b==c&&c==d&&d==a){
        	cout <<"Son iguales";
		}
		else {
			cout<<"No son iguales";
		}
        
        break;
        case 2: cout << "¿x<y<w?";
        cout<<"\nNumero X: ";
        cin>>x;
        cout<<"\nNumero Y: ";
        cin>>y;
        cout<<"\nNumero W: ";
        cin>>w;
        if(x<y&&y<w){
        	cout <<"X es menor a Y y Y es menor a W \n";
		}
		else if(x>y) {
			cout<<"X es mayor a Y \n";
		}
		else if(x>w) {
			cout<<"X es mayor a W \n";
		}
		else if(y>w) {
			cout<<"Y es mayor a W \n";
		}
        
        
        break;
        case 3: cout << "¿El semestre esta entre 1 y 9?";
        cout<<"\nNumero X: ";
        cin>>x;
        if(x>1&&x<9){
        	cout <<"El numero esta entre el 1 y el 9";
		}
		else if(x<1) {
			cout<<"El numero es menor a 1";
		}
		else if(x>9) {
			cout<<"El numero es mayor a 9";
		}
        
        break;
        case 4: cout << "¿Los datos r1,r2 y r3 son diferentes?";
        cout<<"\nNumero X: ";
        cin>>r1;
        cout<<"\nNumero Y: ";
        cin>>r2;
        cout<<"\nNumero W: ";
        cin>>r3;
        if(r1!=r2&&r2!=r3&&r3!=r1){
        	cout <<"Son diferentes";
		}
		else if(r1==r2) {
			cout<<"r1 es igual a r2";
		}
		else if(r1==r3) {
			cout<<"r1 es igual a r3";
		}
		
        
        break;
		case 5: cout << "¿El grupo es A o B?";
		cout<<"\nNumero : ";
		char P ;
        cin>>P;

        if(P=='A'){
        	cout <<"Es A";
        	
		}
		else if(P=='B'){
			cout<<"Es B\n";
			
		}

        break;
        case 6: cout << "¿el número es par o es menor que 3?";
        cout<<"\nNumero X: ";
        cin>>x;

        if(((x %2)==0 )&&x<3){
        	cout <<"es par";
		}
		else {
			cout<<"No son iguales";
		}
        
        break;
        case 7: cout << "¿el número es impar o es mayor o igual que 12?";
        cout<<"\nNumero X: ";
        cin>>x;

        if(((x %2)!=0 )||x>=12){
        	cout <<"Es impar o es mayor a 12 ";
		}
		else {
			cout<<"Es par o es menor de 12";
		}
        
        break;
        case 8: cout << "¿el nombre es Pepe o Luis o Mario?";
        char N;
        cout<<"\nNombre: \n";
        cin>>N;

        if(N=='P'){
        	cout <<"Es pepe , no es luis ni mario";
		}
		else if (N=='L') {
			cout<<"Es luis , no es  ni mario";
		}
		else if(N=='M'){
			cout<<"Es mario , no es luis ni pepe";
		}
		cout<<"\n";
        
        break;
        case 9: cout << "No es cierto que x es menor que 7";
        cout<<"\nNumero X: ";
        cin>>x;

        if(x<=7){
        	cout <<"X es menor o igual a 7";
		}
		else {
			cout<<"X es mayor a 7";
		}
        
        break;

        case 10: cout << "La variable Y no es mayor o igual que 3.2";
        cout<<"\nNumero Y: ";
        cin>>y;

        if(y<=3.2){
        	cout <<"La variable Y no es mayor o igual que 3.2";
		}
		else {
			cout<<"La variable Y es mayor";
		}
        
        break;
        default: cout << "Usted no a seleccionado ninguna opcion";
        
    }
    

    return 0;
}
