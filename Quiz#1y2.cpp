#include <iostream>
#include <iterator>

using namespace std;
/*
//CASO #1, 10 asientos desocupados
int tren [20][2]={
	{1,1},{2,1},{3,0},{4,0},{5,1},{6,0},{7,0},{8,0},{9,1},{10,1},{11,1},{12,0},{13,0},{14,1},{15,0},{16,0},{17,1},
	{18,1},{19,0},{20,1}  //Primer número = número de asiento Segundo número = 0=Ocupado 1=Desocupado
	};
*/
/*
//CASO #2, no hay asientos desocupados
int tren [20][2]={
	{1,1},{2,1},{3,1},{4,1},{5,1},{6,1},{7,1},{8,1},{9,1},{10,1},{11,1},{12,1},{13,1},{14,1},{15,1},{16,1},{17,1},
	{18,1},{19,1},{20,1}  //Primer número = número de asiento Segundo número = 0=Ocupado 1=Desocupado  
	};
*/
/*
//CASO #3, más de 10 asientos desocupados
int tren [40][2]={
	{1,1},{2,1},{3,0},{4,0},{5,1},{6,1},{7,0},{8,0},{9,1},{10,1},{11,1},{12,0},{13,0},{14,1},{15,0},{16,0},{17,1},
	{18,1},{19,0},{20,1},{21,0},{22,1},{23,0},{24,0},{25,1},{26,0},{27,1},{28,0},{29,1},{30,0},{31,1},{32,0},{33,1},{34,1},
	{35,0},{36,1},{37,0},{38,0},{39,0},{40,1}  //Primer número = número de asiento Segundo número = 0=Ocupado 1=Desocupado
	}; 											
*/

int largoBytes=sizeof(tren); //Total de bytes del array

int obtenerLargo(int tren[20][2]){
	int largoPrimerVar=sizeof(tren[0]);
	int largo=largoBytes/largoPrimerVar; //Se divide el total de bytes de todo el array por los bytes de uno de sus elementos para calcular la longitud de este
	
	return largo;
}

int verificarTren(int tren[][2]){
	int cont=0;
	int largo=obtenerLargo(tren);
	cout<<"**Primeros 10 asientos desocupados**"<<endl;
	for(int i=0; i<largo; i++ ){
		if(tren[i][1]==0){ //Verifica cuando el segundo número de cada arreglo interno "{3,0}" por ejemplo tenga un cero, esto significa que está libre
			cout<<"El asiento numero: "<<tren[i][0]<<endl;
			cont++;
			if(cont==10){ //Verfica cuando ya se hayan mostrado los primeros 10 asientos libres y para el ciclo
				break;
			}
		} 	
	}
	int cont2=0;
	cout<<"\n**Ultimos 10 asientos desocupados**"<<endl;
	for(int i=largo-1; i>=0; i-- ){
		if(tren[i][1]==0){
			cout<<"El asiento numero: "<<tren[i][0]<<endl;
			cont2++;
			if(cont2==10){
				break;
			}
		}
	}
	if(cont==0 and cont2==0){
		cout<<"\n**Por el momento, no hay asientos desocupados.**"<<endl; //Imprime la frase si no se encontró ningún asiento desocupado
	}
}

int main(){
	
	verificarTren(tren);
	return 0;
}



