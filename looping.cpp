#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int x;

    cout<<"PERULANGAN FOR"<<endl
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    srand(time(0));

    cout<<"PERULANGAN WHILE"<<endl;
    x = 1 + rand()%10;

    while(x<=5){
        cout<<"Bilangan acak = "<<x <<endl;
        x = rand()%10;
    }
    cout<<"Bilangan acak while yang terakhir ="<<x <<endl;
    cout<<endl;

    cout<<"PERULANGAN DO...WHILE"<<endl;
    x = 1 + rand()%10;
    do{
        cout<<"Bilangan acak = "<<x <<endl;
        x = rand()%10;
    }while(x<=5);
}

Logika not
#include <iostream>
using namespace std;

int main(){
    float nilb,nilM,rerata;
    string status;

    cout<<"Masukan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if(!(rerata <60) )
    status = "Lulus";
    else
    status = "Tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan niali rata-rata = "<<rerata<<endl;
}

Logika or
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;
    cout<<"Masukan niali Matematika = ";
    cin>>nilM;
    cout<<"Masukan nilai Bahasa Inggris =";
    cin>>nilB

    rerata = (nilB+nilM)/2;

    if ((rerata >=60) || (nilM))
    status = "Lulus";
    else
    status = "Tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nialli rata-rata = "<<rerata<<endl;
}