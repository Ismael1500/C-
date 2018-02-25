#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int fichero;//int --> declarar variable numero entero
int salir;
int main(){
    string linea;//string --> declarar palabras
    string nombre;
    cout<<"Dime la ruta del fichero: ";
    getline(cin,nombre);
    ifstream fichero(nombre.c_str());// ifstream para leer fichero ofstream para hacer fichero
    if(fichero.fail()==1){
       cout<<"ERROR.No existe la ruta"; 
       cin>>salir;
       exit(1);
    }
    while(fichero.eof()==0){//fichero.eof para comprobar si se ha terminado el fichero
      getline(fichero,linea);
      cout<<linea<<endl;
    }
    fichero.close();
    cin>>salir;
    return 0;
}