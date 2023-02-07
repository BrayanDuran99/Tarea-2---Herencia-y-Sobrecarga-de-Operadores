/* Seminario de estructura de datos 1
    Tarea 2 - Herencia y Sobrecarga de operadores
    Durán González Brayan Abdael*/
#include <iostream>
using namespace std;

class Mamifero{
    private:
        string Nombre;
        string Raza;
        string Nacimiento;
        int Fecha;
    public:
        Mamifero(string nom,string r,string na,int f){
            this->Nombre = nom;
            this->Raza = r;
            this->Nacimiento = na;
            this->Fecha = f;
        }
        string ImprimeNombre(){
            return Nombre;
        }
        string ImprimeRaza(){
            return Raza;
        }
        string ImprimeNacimiento(){
            return Nacimiento;
        }
        int ImprimeFecha(){
            return Fecha;
        }

        bool operator == (Mamifero &m){
            return Nombre == m.Nombre;
        }
        bool operator != (Mamifero &m){
            return Nombre != m.Nombre;
        }
        bool operator < (Mamifero &m){
            return Nombre < m.Nombre;
        }
        bool operator > (Mamifero &m){
            return Nombre > m.Nombre;
        }
        Mamifero operator + (Mamifero &m){
            Nombre += m.Nombre;
            Raza += m.Raza;
            Nacimiento += m.Nacimiento;
            Fecha += m.Fecha;
            return *this;
        }
};

class Felino: public Mamifero{
    private:
        string Dieta;
        string Lugar;
    public:
        Felino(string nom, string r, string na, int f, string d, string l) : Mamifero(nom,r,na,f){
            Dieta = d;
            Lugar = l;
        }
        Felino(string nom, string r, string na, int f, string d) : Mamifero(nom,r,na,f){
            Dieta = d;
        }
        string ImprimeDieta(){
            return Dieta;
        }
        string ImprimeLugar(){
            return Lugar;
        }
        void Cambialugar(string L){
            Lugar = L;
        }
};

class GatoDomestico: public Felino{
    private:
        string Nomdue;
    public:
        GatoDomestico(string nom, string r, string na, int f, string d, string du) : Felino(nom,r,na,f,d){
            Nomdue = du;
        }
        void Cambianombredue(string N){
            Nomdue = N;
        }
        string ImprimeNomdue(){
            return Nomdue;
        }

};

int main(){
    string N, L;
    GatoDomestico Minino("Mia","Gata","Guadalajara",2017,"Croquetas","Perla");
    Felino EstrellaCirco("Laion","Leon","Monterrey",2010,"Carne","Circo lunar");
    cout<<"Datos del Minino:";
    cout<<"\n\nNombre: "<<Minino.ImprimeNombre();
    cout<<"\nRaza: "<<Minino.ImprimeRaza();
    cout<<"\nLugar de nacimiento: "<<Minino.ImprimeNacimiento();
    cout<<"\nFecha de nacimiento: "<<Minino.ImprimeFecha();
    cout<<"\nDieta: "<<Minino.ImprimeDieta();
    cout<<"\nNombre del duenio: "<<Minino.ImprimeNomdue();

    cout<<"\n\n\nDatos de la Estrella de Circo:";
    cout<<"\n\nNombre: "<<EstrellaCirco.ImprimeNombre();
    cout<<"\nRaza: "<<EstrellaCirco.ImprimeRaza();
    cout<<"\nLugar de nacimiento: "<<EstrellaCirco.ImprimeNacimiento();
    cout<<"\nFecha de nacimiento: "<<EstrellaCirco.ImprimeFecha();
    cout<<"\nDieta: "<<EstrellaCirco.ImprimeDieta();
    cout<<"\nNombre del circo: "<<EstrellaCirco.ImprimeLugar();

    cout<<"\n\n\nIngrese el nuevo nombre para el duenio del Minino: \t";
    cin>>N;
    Minino.Cambianombredue(N);
    cout<<"\nIngrese el nuevo nombre del circo en el que actuara el Felino: \t";
    cin>>L;
    EstrellaCirco.Cambialugar(L);

        cout<<"\n\n\nDatos del Minino:";
    cout<<"\n\nNombre: "<<Minino.ImprimeNombre();
    cout<<"\nRaza: "<<Minino.ImprimeRaza();
    cout<<"\nLugar de nacimiento: "<<Minino.ImprimeNacimiento();
    cout<<"\nFecha de nacimiento: "<<Minino.ImprimeFecha();
    cout<<"\nDieta: "<<Minino.ImprimeDieta();
    cout<<"\nNombre del duenio: "<<Minino.ImprimeNomdue();

    cout<<"\n\n\nDatos de la Estrella de Circo:";
    cout<<"\n\nNombre: "<<EstrellaCirco.ImprimeNombre();
    cout<<"\nRaza: "<<EstrellaCirco.ImprimeRaza();
    cout<<"\nLugar de nacimiento: "<<EstrellaCirco.ImprimeNacimiento();
    cout<<"\nFecha de nacimiento: "<<EstrellaCirco.ImprimeFecha();
    cout<<"\nDieta: "<<EstrellaCirco.ImprimeDieta();
    cout<<"\nNombre del circo: "<<EstrellaCirco.ImprimeLugar();
    cout<<"\n\n\n";
}
