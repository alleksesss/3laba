#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int l;
int main()
{
    ifstream fin("file.txt");  // вывод данных из файлf
    ofstream fout("file.txt"); // ввод данных в файл
    string b;
    float x, y;
    l=0;
    for (int x = -10; x < 8; x++){
        l++;
        if (x >= -10 && x < -6) // 1 диапазон значений
            y = sqrt(4 - pow((x + 8), 2)) - 2;
        else if (x < 2) // 2 диапазон значений
            y = 0.5 * x + 1;
        else if (x < 6) // 3 диапазон значений
            y = 0;
        else if (x <= 8) // 4 диапазон значений
            y = pow((x - 6), 2);
        fout << y << endl;}
    fout.close();
    float *data = new float[l];
    l = 0;
    while (getline(fin, b)) {
        data[l] = stof(b);
        l++; }
    for (int i = 0; i < l; i++)
        cout << data[i] << "\n";
    fin.close(); // закрываем файл
}