/*1. Viết hàm tìm giá trị của đa thức bậc n tại x (hệ số của đa thức là một mảng số thực).
 Hàm có dạng double Polynom(double * heso, int n, double x)*/
 #include <iostream>
 #include <math.h>
 #include <string>
 #include <array>
 using namespace std;
 double Polynom (double * heso,int n,double x) {
    double dapan=0;
    for (int i=n;i>=0;i--) {
        dapan+=heso[i]*pow(x,i);
    }
    return dapan;
 }

 int main () {
    int n;
    cout << "Nhap bac cua da thuc : ";
    cin >> n;

    double heso[n+1];
    cout << "Nhap he so cua da thuc tu bac cao de bac thap :";
    for (int i=n;i>=0;i--) {
        cin >> heso[i];
    }

    double x;
    cout<< "Nhap x :" ;
    cin >>x;

    cout << "Gia tri bieu thuc :" << Polynom(heso,n,x);


    return 0;
 }