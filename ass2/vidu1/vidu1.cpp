// input.txt
//  1 4 7 8 9
//  Đọc file và hiển thị nội dung
//  Tìm phần tử lớn nhất, ghi vào file output.txt
#include <iostream>
#include <fstream>
using namespace std;
const int ARRAY_MAX = 50;
int i = 0;

void docFile(string tenFile, int arr[ARRAY_MAX])
{
    ifstream fileInput(tenFile);
    if (fileInput.fail())
    {
        cout << "Mở file thất bại";
    }
    else
    {
        cout << "OK" << endl;
    }
    // Đọc dữ liệu từ file

    while (!fileInput.eof())
    {
        fileInput >> arr[i];
        i++;
    }

    fileInput.close();
}
void hienThi(int arr[ARRAY_MAX])
{
    for (int j = 0; j < i; j++)
    {
        cout << arr[j] << " ";
    }
}
int timMax(int arr[ARRAY_MAX])
{
    int max = arr[0];
    for (int j = 0; j < i; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
    }
    return max;
}
void ghiFile(string tenFile, int phanTu)
{
    ofstream fileOut(tenFile);
    fileOut << phanTu << endl;
    fileOut.close();
}
int main()
{
    int numbers[ARRAY_MAX];
    docFile("input.txt", numbers);
    // hiển thị dữ liệu
    hienThi(numbers);
    // Tìm phần từ lớn nhất
    int max = timMax(numbers);

    cout << endl
         << "Max = " << max;
    // Ghi file
    ghiFile("output.txt", max);

    return 0;
}