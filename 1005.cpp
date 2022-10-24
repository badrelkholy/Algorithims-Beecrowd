#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
 
using namespace std;
 
int main() {

	double A, B, MEDIA;
	double A_weight = 3.5;
	double B_weight = 7.5;
	double A_final, B_final;
	double Sum = A_weight + B_weight;

	cin >> A;
	cin >> B;

	A_final = A * A_weight;
	B_final = B * B_weight;
	MEDIA = (A_final + B_final) / Sum;

	cout << "MEDIA = " << fixed << setprecision(5) << MEDIA << endl;

}