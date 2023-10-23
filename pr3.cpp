#include <iostream>

using namespace std;
char nume1[50] ={0} ,prenume1[50]={0} , grupa1[50]={0},dataNasterii1[50] = {0};
char nume2[50] ={0} ,prenume2[50]={0} , grupa2[50]={0},dataNasterii2[50] = {0};
char nume3[50] ={0} ,prenume3[50]={0} , grupa3[50]={0},dataNasterii3[50] = {0};

int main()
{
    /*Sa se scrie un program in care se citesc datele a 3 studenti (nume, prenume,
grupa, data nasterii(zi, luna, an))
Datele se vor afisa in urmatorul format:*/
   cout <<"Introdu datele studentului nr. 1: "<<endl;
   cout << "Nume:";cin.getline(nume1,50);cout<<endl;
   cout <<"Prenume:";cin.getline(prenume1,50);cout<<endl;
   cout<<endl;
   cout<<"Grupa:";cin.getline(grupa1,50);cout<<endl;
   cout<<endl ; 
   cout<<"Data nasterii:";cin.getline(dataNasterii1,50);cout<<endl;
   cout << endl ; 
   

   cout <<"Introdu datele studentului nr. 2: "<<endl;
   cout << "Nume:";cin.getline(nume2,50);cout<<endl;
   cout <<"Prenume:";cin.getline(prenume2,50);cout<<endl;
   cout<<endl;
   cout<<"Grupa:";cin.getline(grupa2,50);cout<<endl;
   cout<<endl ; 
   cout<<"Data nasterii:";cin.getline(dataNasterii2,50);cout<<endl;
   cout << endl ; 

   cout <<"Introdu datele studentului nr. 3: "<<endl;
   cout << "Nume:";cin.getline(nume3,50);cout<<endl;
   cout <<"Prenume:";cin.getline(prenume3,50);cout<<endl;
   cout<<endl;
   cout<<"Grupa:";cin.getline(grupa3,50);cout<<endl;
   cout<<endl ; 
   cout<<"Data nasterii:";cin.getline(dataNasterii3,50);cout<<endl;
   cout << endl ; 
cout <<"---------------------------------------------"<<endl ; 
cout <<"Nume:      "<<"Prenume    " << " Grupa" << "   Data nasterii" << endl ;
cout<<"-----------------------------------------------"<<endl ;

    cout << nume1 << "   " <<prenume1 << "     " << grupa1 << "   " << dataNasterii1 << endl ;
    cout << nume2 << "   " <<prenume2 << "     " << grupa2 << "   " << dataNasterii2 << endl ;
    cout << nume3 << "   " <<prenume3 << "     " << grupa3 << "   " << dataNasterii3 << endl ;
    return 0;
}