/**
 *    @file: gas_consumption.cc
 *  @author: Matthew Isham
 *    @date: 9/13/24      \
 *   @brief: calculates miles drove into various gas statistics about a certain vehicle
 *  
 */


#include <iomanip>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    double townrate = 22.5;
    double highwayrate = 29.5;
    double townmiles;
    double highmiles;

    // asks the user for the town miles
    cout << "Please enter the miles you drove in town: ";
    cin >> townmiles;
    if(townmiles < 0){
        cout << "Error you inputted less than zero miles";
        return(0);
    }
    // asks the user the highway miles
    cout << endl <<"Please enter the miles you drove on the highway: ";
    cin >> highmiles;
    if(highmiles < 0){
        cout << "Error you inputted less than zero miles";
        return(0);
    }

    // gets the gallons used for town driving
    double gallonstown = townmiles / townrate;

    //gets the gallons used for highway driving
    double gallonshighway = highmiles / highwayrate;

    // sets the digit places used to 4
    cout << setprecision(4);

    // calculates the total miles driven
    double totalmiles = highmiles + townmiles;

    // calculates the total gas consumption
    double totalgas = gallonshighway + gallonstown;


    // calculates the total miles per gallon of the trip
    double mpg = totalmiles / totalgas;


    // displays the town car statistics

    cout << endl << "------------Gas Consumption------------"; 
    cout << endl << "The number of miles driven in town: " << townmiles << " miles";
    cout << endl << "The gas consumption for town driving: " << gallonstown << " gallons";


    // displays the highway car statistics
    cout << endl << "The number of miles driven on the highway: " << highmiles << " miles";
    cout << endl << "The gas consumption for highway driving: " << gallonshighway << " gallons";

    // displays the total miles and gas consumption
    cout << endl << "The total miles driven: " << totalmiles << " miles";
    cout << endl << "The total gas consumption: " << totalgas << " gallons";

    // displays the total miles per gallon of the trip

    cout << endl << "The average miles per gallon for the trip: " << mpg << " miles/gallon" << endl;


    
    return(0);
}
