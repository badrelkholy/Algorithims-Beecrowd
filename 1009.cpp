// Read seller's name
// Read his/her fixed salary
// Read the sale's total made by himself/herself in the month (in money)
// SELLER RECEIVES 15% OVER ALL PRODUCTS SOLD 
// Write the final salary (total) of this seller at the end of the month, with two decimal places.


#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
 
using namespace std;
 
int main() {

    string Name;
    double SellerSalary, TotalValueSold, Total, PercentFromSales;

    cin >> Name >> SellerSalary >> TotalValueSold;

    PercentFromSales = 0.15;
    Total = SellerSalary + (TotalValueSold * 0.15);


    cout << "TOTAL = " << "R$ " << fixed << setprecision(2) << Total << endl;

}