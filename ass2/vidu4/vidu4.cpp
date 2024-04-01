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

int UCLN(int a, int b)
{
    // Nếu a = 0 => ucln(a,b) = b
    // Nếu b = 0 => ucln(a,b) = a
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    while (a != b)
    {
        if (a > b)
        {
            a -= b; // a = a - b
        }
        else
        {
            b -= a;
        }
    }
    return a; // return a or b, bởi vì lúc này a và b bằng nhau
}
int BCNN(int a, int b){
    if (a== 0 || b==0)
    {
        return a+b;
    }
    if(a!=b)
    {
        if (a>b)
        {
            int tam = a;
            while (a%b!=0)
            {
                a+=tam;
               
            }
            return a;
            
            
        }else{
            int tam = b;
            while (b%a!=0)
            {
                b+=tam;
            }
            return b;
            
        }
   
        
    }

    
    
}

int uocChungLonNhat(int arr[MAX], int size)
{
    int ucln = arr[0];
    for (int j = 1; j < size; j++)
    {
       ucln = UCLN(ucln, arr[j]);
    }
    return ucln;
}
int boiChungNhoNhat(int arr[MAX], int size)
{
    int bcnn = arr[0];
    for (int j = 1; j < size; j++)
    {
       bcnn = BCNN(bcnn, arr[j]);
    }
    return bcnn;
}
void ghiFile(string tenFile , int value ){
    ofstream fileOut(tenFile);
    fileOut << value << " ";
    fileOut.close();
    
}
int main()
{
    int size = 0;
    int arr[MAX];
    readFile("input.txt", arr, size);
    show(arr, size);
    int ucln = uocChungLonNhat(arr, size);
    cout << endl << "UCLN: "<< ucln << endl;
    ghiFile("UCLN.txt", ucln);
    int bcnn = boiChungNhoNhat(arr,size);
    cout << endl << "BCNN: " << bcnn << endl;
    ghiFile("BCNN.txt", bcnn);

    
}
