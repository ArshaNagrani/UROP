#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("data.txt");

	int i;
   	for (i=1; i<=17; i++)
   		myfile << "/LettuceImagesYes/"<< i << "jpg" << " " << "1" << endl;
	int j;
	for (j=1; j<=10; j++)
   		myfile << "/LettuceImagesNo/"<< i << "jpg" << " " << "0" << endl;
  myfile.close();
  return 0;
}
