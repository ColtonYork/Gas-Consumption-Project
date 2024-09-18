/**
 *   @file: gas_consumption.cc
 * @author: Colton York 
 *   @date: Sep 9, 2024
 *  @brief: Gas Consumption project 1
 */

/**
 *   @file: gas_consumption.cc
 * @author: Nasseef Abukamail
 *   @date: September 09, 2023
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

const double MPG_town = 22.5;
const double MPG_highway = 29.5;

int main(int argc, char const *argv[]) {
    double miles_driven_highway;
    double miles_driven_town;

//Takes user input of miles driven in town
   cout << fixed << setprecision(2);            
   cout << "How many miles were driven in town: " << endl;
   cin >> miles_driven_town;
if (miles_driven_town < 0){
    cout << "Miles driven must be positive" << endl;
return 0;
   }

//Takes user input of miles driven on highway
   cout << "How many miles were driven on highway: " << endl;
   cin >> miles_driven_highway;
if(miles_driven_highway < 0){
    cout << "Miles driven must be positive" << endl;
return 0;
   }

//Prints miles driven in town and gas consumption in town
   cout << "Miles driven in town: " << miles_driven_town << endl;
    double gas_consumption_town = miles_driven_town / MPG_town;
   cout << "Gas consumption in town: " << gas_consumption_town << " gallons" << endl;

//Prints miles driven on highway and gas consumption on highway
   cout << "Miles driven on highway: " << miles_driven_highway << endl;
    double gas_consumption_highway = miles_driven_highway / MPG_highway;
   cout << "Gas consumption on highway: " << gas_consumption_highway << " gallons" << endl;
   
//Print total number of miles driven 
    double total_miles_driven = miles_driven_town + miles_driven_highway;
    cout << "Total number of miles driven: " << total_miles_driven << endl;;

//prints total gas consumption
double total_gas_consumption = gas_consumption_town + gas_consumption_highway;
cout << "Total gas consumption: " << total_gas_consumption << " gallons" << endl;

//Prints average miles per gallon for whole trip
double MPG_whole_trip = total_miles_driven / total_gas_consumption;
cout << "Miles per gallon for whole trip: " << MPG_whole_trip << endl;
    return 0;
} 


