#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
 
using namespace std;
 
int main() {

	double A, B, C, MEDIA;
	double A_weight = 2;
	double B_weight = 3;
    double C_weight = 5;
	double A_final, B_final, C_final;
	double Sum = A_weight + B_weight + C_weight;

	cin >> A;
	cin >> B;
    cin >> C;

	A_final = A * A_weight;
	B_final = B * B_weight;
    C_final = C * C_weight;
	MEDIA = (A_final + B_final + C_final) / Sum;

	cout << "MEDIA = " << fixed << setprecision(1) << MEDIA << endl;

}