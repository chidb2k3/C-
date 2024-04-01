#include <iostream>
#include <fstream>
using namespace std;
docFile(string tenFile){

    ifstream fileInput(tenFile);

    if (fileInput.fail())
    {
        cout << "No";
    }else{
        cout << "Yes" << endl;
    }
    while (!fileInput.eof())
    {
        char temp[255];
        fileInput.getline(temp, 255);
        string line = temp;
        cout << line << endl;
    }
    
    
}
void ghiFile(string tenFile, string value){
    ofstream fileOut(tenFile);
    fileOut << value;
    fileOut.close();
}
int main(){
    docFile("input.txt");
    ghiFile("output.txt","Chi");


    return 0;
    
    
}