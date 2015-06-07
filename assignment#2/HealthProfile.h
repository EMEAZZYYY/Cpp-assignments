/*
 * HealthProfile.h
 * HealthProfile class definition. This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        UNANAM, MFUT JIMMY
 * Matric No:   45424184DC
 * Department:  COMPUTER SCIENCE
 *
 */

#include <string>           // uses C++ string class
using namespace std;

// HealthProfile class definition
class HealthProfile
{
    // public interface
public:
    HealthProfile( string firstName, string lastName, string gender, int month, int day, int year, int weight, double height, int currentDay, int currentMonth, int currentYear ); // constructor that initializes patient information

    string getFirstName();          
    void setFirstName( string firstName );    

    string getLastName();          
    void setLastName( string lastName );     

    string getGender();          
    void setGender( string gender );      

    int getMonth();          
    void setMonth( int month );      

    int getDay();          
    void setDay( int day );      

    int getYear();         
    void setYear( int year ); 

    int getWeight();   
    void setWeight( int weight );  

    double getHeight();        
    void setHeight( double height );     

    int setAge( int currentDay, int currentMonth, int currentYear);        //  function that sets the age
    int getAge();       // function to get patients age in years


    double getBMI();                // function to calculate and return BMI
    int getMaximumHeartRate();      // function to calculate and return maximum heart rate
    double getTargetHeartRate();    // function to calculate and return target heart rate

    int getInformation();          // function to print object information

    // TODO: Provide get and set function prototypes of each class attribute
    // Function prototypes for the constructor, getAge(), getBMI(), getMaximumHeartRate()
    // getTargetHeartRate() and getInformation() has already been provided


    // private interface
private:
    string firstName;               // variable to hold firstname
    string lastName;                // variable to hold lastname
    string gender;                  // variable to hold gender
    int month;                      // variable to hold month
    int day;                        // variable to hold day
    int year;                       // variable to hold year
    double height;                  // variable to hold height
    int weight;                     // variable to hold weight
    int age;                        // variable to hold age

}; // end class HealthProfile

