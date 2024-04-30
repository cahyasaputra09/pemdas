#include <iostream>
using namespace std;

int main() {
    string status;
    int nSEHAT, nTIDAKSEHAT, nRerata;

    cout << "Masukan Status Sehat = ";
    cin >> nSEHAT;

    cout << "Masukan Status Tidak Sehat = ";
    cin >> nTIDAKSEHAT;
    nRerata = (nSEHAT + nTIDAKSEHAT) / 2;

    if (nRerata >= 60) {
        status = "Sehat";
    }
    else if (nSEHAT >= 75) {

