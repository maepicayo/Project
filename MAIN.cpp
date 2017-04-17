//SEMESTER SOFTWARE PROJECT - A SHIPMENT BUSINESS COMPANY

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
 usingnamespace std;
 
 int main ()
 {
 istream masterFile;
 masterFile.open ("masterdata.txt")
  
 istream truckFile;
 truckFile.open ("truckdata.txt")
  
 istream userFile;
 userFile.open ("userdata.txt")
 
 
 system ("pause");
 return 0;
 }
