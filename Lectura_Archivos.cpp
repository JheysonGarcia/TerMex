#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    string File_Name = "Archivo.txt";
    ofstream File;

    File.open(File_Name.c_str(), fstream::app);
    if(!File.is_open()){
        cout<<"Apertura realizada con exito";
    }
    else
    {
        File << "\nS&-";
        if (File[0] == S && File[1] && File)
        {
            /* code */
        }
        
    }
    File.close();
}