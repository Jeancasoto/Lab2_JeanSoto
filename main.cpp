#include <iostream>
using namespace std;

int primo(int);

  //Revisa si es primo
       int  primo(int numero){
        int cont;
                for(int i=1; i<=numero; i++){
                        if(numero%i==0){
                        cont++;


                        }//fin if       
                }//fin for
                if(cont==2){
                        return 100;
                }else{
                        return 500;
                }


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
		/*for(int i=1; i<num; i++){
			for(int i=1; i<num; i++){


                	}// fin for interno
		}//fin for externo
		cout<<"La suma es:"<<acumulador<<endl;*/
		

		for(int i=1; i<num; i++){
		int var=primo(i);
		cout<<i;
		cout<<"------"<<var<<endl;


		}
                cout<<"-------"<<acumulador<<endl;
		
		}//fin case 1
		break;
		case 2: {

		cout<<"Elijio el caso 2"<<endl;



		}//fin case 2
		break;

		case 3:{

		cout<<"Elijio el caso 3"<<endl;

		}//fin case 3
		break;	



		}//fin switch



	}//fin while
}// fin main

