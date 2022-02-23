#include<iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

 int main()
 {
 	float a,b,c,d,x,y, 
	 resultado = 0,
	 resultado2 = 0,
	 resultado3 = 0,
	 resultado4 = 0,
	 resultado5 = 0,
	 resultado6 = 0,
	 resultado7 = 0,
	 resultado8 = 0;
 	
 	cout<<"Escribe el valor de a: "; cin>>a;
 	cout<<"Escribe el valor de b: "; cin>>b;
 	cout<<"Escribe el valor de c: "; cin>>c;
 	cout<<"Escribe el valor de d: "; cin>>d;
 	cout<<"Escribe el valor de x: "; cin>>x;
 	cout<<"Escribe el valor de y: "; cin>>y;
 	 
 	resultado =  (b*a-pow(b,2)/4*c);
 	resultado2 = (a*b)/pow(3,2);
 	resultado3 = (((b*c)/2*a+10)*3*b);
 	resultado4 =  pow(a,pow(b,c));
 	resultado5 =  3*pow(x,4)-5*pow(x,3)+x*12-17;
 	resultado6 = (b*d)/(c+4);
 	resultado7 =  pow(b,2)-a*9*c;
 	resultado8 = pow(pow(x,2)+pow(y,2),(.5));
 	
 	
 	
 	cout<<" el resultado del ejercicio 1 es: "<<resultado;
 	cout<<"\n";
 	cout<<" el resultado del ejercicio 2 es: "<<resultado2;
 	cout<<"\n";
 	cout<<" el resultado del ejercicio 3 es: "<<resultado3;
 	cout<<"\n";
 	cout<<" el resultado del ejercicio 4 es: "<<resultado4;
 	cout<<"\n";
 	cout<<" el resultado del ejercicio 5 es: "<<resultado5;
 	cout<<"\n";
 	cout<<" el resultado del ejercicio 6 es: "<<resultado6;
 	cout<<"\n";
 	cout<<" el resultado del ejercicio 7 es: "<<resultado7;
 	cout<<"\n";
 	cout<<" el resultado del ejercicio 8 es: "<<resultado8;
 	cout<<"\n";
 	
 	return 0;
 	
 }
