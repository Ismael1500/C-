#include<iostream>
using namespace std;
int alumno;
int persona;
int main(){
    //creamos una estructura
    struct alumno{
           string nombre;
           string apellidos;
           int Nota;
           char Clase;
           int posicion;
    };
    //rellenamos la estructura paa los alumnos
    int cont;
    alumno tic[8];
    for(cont=0;cont<8;cont++){
      cout<<"ALUMNO: "<<cont<<endl;
      cout<<"Nombre: ";
      cin>>tic[cont].nombre;
      cout<<"Apellidos: ";
      cin>>tic[cont].apellidos;
      cout<<"Nota: ";
      cin>>tic[cont].Nota;
      cout<<"Perteneces al C, T o H? ";//cambiamos la posicion en el aula por la clase a la que petenecen paa hacerlo mas chulo
      cin>>tic[cont].Clase;
      cout<<"Posicion en la clase segun tu numero de silla: ";
      cin>>tic[cont].posicion;
      }
}
