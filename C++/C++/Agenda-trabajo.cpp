//agenda
#include<iostream>
#include<fstream>

using namespace std;
int personas;
int n;
int p;
int main(){
    //declaro una estructura segun los datos que querre darle a los contactos
    struct contacto{
           string nombre;
           int tlf[9];
           string correo;
    };
//con esto le damos vida a la agenda haciendo que el que la vaya a usar tenga que elegir la opcion que quiera
cout<<"si quieres agregar contactos pular (1)"<<endl<<"si has entrado por error pulsar (2)"<<endl;
cin>>p;
    if(p==1){
    cout<<" ==>  Cuantos contactos quieres agregar?:    "<<endl;
            cin>>personas;
            contacto numero[personas];
            for(n=0;n<personas;n++){
                cout<<"Inserta los datos del contacto que vas a agregar a continuacion"<<endl;
                cout<<"Contacto "<<n+1<<" :"<<endl;
                cout<<"  Nombre contacto: ";
                cin>>numero[n].nombre;
                cout<<"  Numero telefono contacto: ";
                cin>>numero[n].tlf;
                cout<<"  Correo contacto";
                cin>>numero[n].correo;
            }
            
//guardamos los datos obtenidos en un fichero para almacenarlo en la memoria del pc
            ofstream file("Agenda telefonica.txt");
                   for(n=0;n<personas;n++){
                          file<<"Contacto "<<n+1<<endl;                                              
                          file<<"  Nombre contacto: "<<numero[n].nombre<<endl;
                          file<<"  Numero telefono contacto: "<<numero[n].tlf<<endl;
                          file<<"  Correo contacto"<<numero[n].correo<<endl;
                          }
                          file.close();
return 0;
}
if(p==2){
    return 0;
}
else{
    cout<<"No has elegido correctamente, vuelve a elegir"<<endl;
    cin>>p;
}
}
