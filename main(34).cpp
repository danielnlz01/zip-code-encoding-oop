#include <iostream>
#include <string>
#include "Zip.h"

using namespace std;

int main() 
{
  Zip *z = new Zip();
  cout << "zip code 1: ";
  z->getZip();
	z->setZip(9, 5, 0, 1, 4);
	cout << endl << "new zip code 1: ";
	z->getZip();
	cout << endl << "encoded zip code: " << z->encodeZip() << endl;
	
	cout << endl << "zip code 2: ";
	Zip *z1 = new Zip(0, 4, 8, 1, 0);
	z1->getZip();
	cout << endl << "encoded zip code: " << z1->encodeZip();
	
  return 0;
}