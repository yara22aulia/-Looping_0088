Logika not
#include <iostream>
using namespace std;

int main()
{
    float nilB, nilM, rerata;
    string status;

    cout<<"Masukan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if(!(rerata < 60))
        status = "Lulus";
    else
        status = "Tidak lulus";
    
    cout<<"Status kelulusan = " <<status<<" ,dengan nilai rata-rata = " << rerata << endl;
}