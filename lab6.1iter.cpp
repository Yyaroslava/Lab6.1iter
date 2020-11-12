// Формування елементів масиву за допомогою генератора випадкових чисел 
// Діапазон значень елементів масиву – від Low до High включно, визначається відповідними параметрами функції. 
// Ітераційний спосіб

#include <iostream> 
#include <iomanip> 
#include <time.h> 

using namespace std;

void Create(int* c, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++)
        c[i] = Low + rand() % (High - Low + 1);
}

void Print(int* c, const int size) {
    for (int i = 0; i < size; i++)

        cout << setw(4) << c[i];
    cout << endl;
}

int Count(int* c, const int size){
        int count = 0;
        for (int i = 0; i < size; i++) {
            if ((c[i] % 2 != 0) && (i != 13)) {
                count++;
            }
            else {
                c[i] = 0;
            }
        }
        return count;
}

int Sum(int* c, const int size) {
      int S = 0;
    for (int i = 0; i < size; i++)
        if ((c[i] % 2 != 0) && (i != 13))
            S += c[i];
    return S; 
}


int main() {
    srand((unsigned)time(NULL));  // ініціалізація генератора випадкових чисел  
    const int n = 21;
    int c[n];

    int Low = 15;
    int High = 85;

    Create(c, n, Low, High);
    Print(c, n);
    cout << "Sum = " << Sum(c, n) << endl;
    cout << "Count = " << Count(c, n) << endl;
    Print(c, n);

    return 0;
}