#include <iostream>
#include <clocale>

using namespace std;
// Вариант 8
int main() {
    setlocale(LC_ALL, "ru");
    int N;
    cout << "Введите количество чисел: ";
    cin >> N;
    int b = 0;
    int num;

    cout << "Введите набор чисел:" << endl;
    for (int i = 1; i <= N; i++) {
        cin >> num;
        if (num % 2 != 0) {
            cout << "Порядковый номер:" << i << endl;
            b++;
        }
    }
    cout << "Количество нечетных чисел: " << b << endl;
}