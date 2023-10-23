#include <iostream>

using namespace std;

int main()
{
   /*Sa se scrie un program in care se citesc de la tastatura date despre un
student: nume, prenume, grupa, data nasterii(zi, luna, an).
Datele se vor afisa in urmatorul format: */
    char nume[50] ={0} ,prenume[50]={0} , grupa[50]={0},dataNasterii[50] = {0};
    
    cout << "Introdu datele studentului:"<<endl;
    cout << "Nume:" ; cin.getline(nume,50) ; 
    cout << "Prenume: ";cin.getline(prenume,50) ; cout<< endl ; 
    
    cout << "Grupa:";cin.getline(grupa,50);
    cout << endl ;
    cout << "Data nasterii: " ; 
    cin.getline(dataNasterii,50)  ; cout << endl ;

    cout << "----------------------" << endl ; 
    cout<<"Student: "<<nume <<" " << prenume<<endl  ; 
    cout << "Grupa:" << grupa ;cout << endl ;  
    cout << "Data nasterii: " << dataNasterii<<endl ;
    cout <<"-----------------------";

    return 0;
}