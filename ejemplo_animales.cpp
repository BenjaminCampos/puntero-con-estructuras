#include<iostream>

using namespace std;
struct Animal{
	char nombre[20];
	int edad;
	struct Animal *ptr;
}animal1,animal2,*inicio;

int main()
{
	inicio=&animal1;
	inicio->ptr=&animal2;
	cout<<"edad del animal 1"<<endl;
	cin>>inicio->edad;
	cout<<"nombre del animal 1"<<endl;
	fflush(stdin);
	cin.getline(inicio->nombre,20,'\n');
	
	cout<<"edad del animal 2:"<<endl;
	fflush(stdin);
	cin>>inicio->ptr->edad;
	cout<<"nombre del animal 2:"<<endl;
	fflush(stdin);
	cin.getline(inicio->ptr->nombre,20,'\n');
	
	int totaldeanimales=10;
	struct Animal animal3;
	
	 inicio->ptr->ptr=&animal3;
	 cout<<"edad del animal 3:";
	 cin.getline(inicio->ptr->ptr->nombre,20,'\n');
	 
	 cout<<"direccion de inicio "<< &inicio << endl;
	 cout<<"direccion del animal1 "<< &animal1 <<endl;
	 cout<<"direccion del animal2 "<< &animal2 <<endl;
	 cout<<"edad que se guardo "<< inicio->edad<<endl;
	 cout<<"nombre que se guardo 1 "<<inicio->nombre<<endl;
	 cout<<"edad que se guardo 2 "<<inicio->ptr->edad<<endl;
	 cout<<"nombre que se guardo 2"<<inicio->ptr->nombre<<endl;
	 cout<<"nombre 3 "<<inicio->ptr->ptr->nombre<<endl;
	 cout<<"edad 3 "<<inicio->ptr->ptr->edad<<endl;	
	return 0;
}
