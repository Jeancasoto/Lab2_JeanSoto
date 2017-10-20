#include <iostream>
using namespace std;

int primo(int);
int var; 

 //Revisa si es primo
 int  primo(int numero){
 	int cont=0;
        for(int i=1; i<=numero; i++){
        	if(numero%i==0){
               	cont++;
	        }//fin if       
       }//fin for
     	 if(cont==2){
     	   return 100;
     	  }else{
    	    return 500;
         }//fin else

 }//fin metodo

int main(){
	while(true){


	int opcion;

	cout<<"Bienvenido acontinuacion seleccione una opcion"<<endl;
	cout<<"Ejercicio #1"<<endl;
	cout<<"Ejercicio #2"<<endl;
	cout<<"Ejercicio #3"<<endl;
	cin>>opcion;

		switch(opcion){
		case 1: {
		int num;
		int acumulador=0;
		cout<<"Elijio el caso 1"<<endl;
		cout<<"Ingrese un numero:"<<endl;
		cin>>num;
		

			for(int i=1; i<num; i++){
	 		var=primo(i);
				if(var==100){
				acumulador+=i;
				}//fin if que acumula

			}//fin for
                cout<<"La suma es-----"<<acumulador+1<<endl;
		
		}//fin case 1
		break;
		case 2: {
		int acum=0;
		int a;
		int b;
		int n;
		cout<<"Elijio el caso 2"<<endl;
		
		cout<<"Ingrese a:"<<endl;
		cin>>a;
		cout<<"Ingrese b:"<<endl;
                cin>>b;
		cout<<"Ingrese n:"<<endl;
                cin>>n;

		for(int j=2;j<=n;j++ ){
			if(j%a==0 && j%b!=0){
			acum+=j;
			}
			 if(j%b==0&&j%a!=0){
                        acum+=j;
                        }
			if(j%a==0&&j%b==0){
			acum+=j;
			}


		}//fin for
		cout<<"La suma es -----"<<acum<<endl;



		}//fin case 2
		break;

		case 3:{

		cout<<"Elijio el caso 3"<<endl;

		}//fin case 3
		break;	



		}//fin switch



	}//fin while
}// fin main

