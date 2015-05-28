#include <iostream>
using namespace std;

int pierwsza(int n);

int main() {
    int n;
    cout<<"Podaj ktora liczbe pierwsza mam wyswielic: ";
    cin>>n;
    cout<<"Jest to liczba: "<<pierwsza(n)<<endl;
    system("pause");
    return 0;
}

int pierwsza(int n) {
    int j=1;
    int wynik=2;
    for (int i=2;j<n;i++) {
        for (int k=2;k<i;k++) {
            if (i%k == 0) {
                break;
            }
            if (k == i-1) {
                j++;
            }
        }
        wynik=i;
    }
    return wynik;
}
