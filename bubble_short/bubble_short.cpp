// bubble_short.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int a[20];                          //Deklarasi array a dengan ukuran 20
int n;                              //Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {                      //procedur untuk input
    while (true) {                  //looping
        cout << "Masukan banyak elemen pada array : ";      //Output ke layar
        cin >> n;                   //input dari pengguna
        if (n <= 20)                //jika n kurang dari atau samadengan 20
            break;                  //keluar dari loop
        else {                      //jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";  //Output ke layar
        }
    }
    cout << endl;                                   //Output baris kosong
    cout << "==================" << endl;           //Output ke layar
    cout << "Masukan Elemen Array" << endl;         //Output ke layar
    cout << "==================" << endl;           //OUtput ke layar

    for (int i = 0; i < n; i++) {                   //Looping dengan i dimulai dari 0 hingga n-1
        cout << "data ke-" << (i + 1) << ": ";      //Output ke layar
        cin >> a[i];                                //Input dari pengguna

    }
}  

void bubbleSortArray() {                        //procedur untuk mengurutkan array dengan metode bubble short
    for (int i = 1; i < n; i++) {               //looping dengan i dimulai dari 1 hingga n-1
        for (int j = 0; j < n - i; j++) {       //looping dengan j dimulai dari 0  hingga n -i-1
            if (a[j] > a[j + 1]) {              //jika nilai pada a[j] lebih besar dari a[j+1]
                int temp = a[j];                //simpan nilai a[j] ke variable sementara temp
                a[j] = a[j + 1];                //assign nilai a[j+1] ke a [j]
                a[j + 1] = temp;                //Asign nilai temp ke a[j+1]
            }
        }
    }
}           

void unsorted() {                                     //procedur untuk menampilkan hasil
    cout << endl;                                    //Output baris kosong
    cout << "==================" << endl;           //Output ke layar
    cout << "Element Array yang belum tersusun" << endl;     //Output ke layar
    cout << "==================" << endl;                    //Output ke layar
    for (int j = 0; j < n; j++) {                           //Looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl;                               //output ke layar
    }
    cout << endl;                                           
}



void display() {                                     //procedur untuk menampilkan hasil
    cout << endl;                                    //Output baris kosong
    cout << "==================" << endl;           //Output ke layar
    cout << "Element Array yang telah tersusun" << endl;     //Output ke layar
    cout << "==================" << endl;                    //Output ke layar
    for (int j = 0; j < n; j++) {                           //Looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl;                               //output ke layar
    }
    cout << endl;                                           //Output baris kosong
}

int main() {
    input();                                                 //Memanggil procedur read()
    unsorted();                                              //Memanggil procedur unsorted() dari
    bubbleSortArray();                                      //memanggil procedur bubbleshortArray()
    display();                                              //memanggil procedur display()

    return 0;

}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
