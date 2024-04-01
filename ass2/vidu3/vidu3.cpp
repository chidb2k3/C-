#include <iostream>
#include <fstream>
using namespace std;
const int MAX = 50;

void readFile(string tenFile, int arr[MAX], int &i)
{
    ifstream fileInput(tenFile);
    if (fileInput.fail())
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
    }
    while (!fileInput.eof())
    {
        fileInput >> arr[i];
        i++;
    }

    fileInput.close();
}
void show(int arr[MAX], int i)
{
    for (int j = 0; j < i; j++)
    {
        cout << arr[j] << " ";
    }
}
bool kiemTraChan(int a){
    if ( a % 2 == 0)
    {
        return 1;
    }
    return 0;
    
}
void ghiFile(string tenFile ,int arr[MAX], int i ){
    ofstream fileOut("ketqua.txt");
    for (int j = 0; j<i; j++)
    {
        if (kiemTraChan(arr[j])==1)
        {
            fileOut << arr[j] << " ";
        }
        
    }
    fileOut.close();
    
}
int main()
{
    int size=0;
    int arr[MAX];
    readFile("input.txt", arr,size);
    show(arr, size);
    ghiFile("ketqua.txt", arr,size);

}