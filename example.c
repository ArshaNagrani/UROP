#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("indoor_datalist.txt");

	int i;
   	for (i=0; i<=880; i++)
   		//myfile << "/LettuceImagesYes/"<< i << "jpg" << " " << "1" << endl;
		myfile << "/livingroom/rgb/" << i << ".png" <<" "<< "1" << endl;
	int j;
	for (j=1; j<=1508; j++)
   		//myfile << "/LettuceImagesNo/"<< i << "jpg" << " " << "0" << endl;
		myfile << "/office/rgb/" << j << ".png" <<" "<< "2" << endl;

  myfile.close();
  return 0;
}
