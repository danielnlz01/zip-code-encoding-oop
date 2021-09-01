#ifndef ZIP_H
#define ZIP_H

#include <iostream>
#include <string>

using namespace std;

class Zip 
{
  private: 
    int A, B, C, D, E, Check;
  public:
    Zip();
    Zip(int A, int B, int C, int D, int E);

    ~Zip();

  void getZip();
  void setZip(int A, int B, int C, int D, int E);
  
  double checkDigit();
  string encodeZip();
};


Zip :: Zip()
{
	this->A = 0;
	this->B = 1;
	this->C = 0;
	this->D = 0;
	this->E = 0;
	this->Check = 0;
}


Zip :: Zip(int A, int B, int C, int D, int E)
{
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
	this->E = E;
	this->Check = 0;
}

Zip :: ~Zip()
{
  
}

void Zip :: getZip()
{
	cout << this->A << this->B << this->C << this->D << this->E; 
}

void Zip :: setZip(int A, int B, int C, int D, int E)
{
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
	this->E = E;
}

double Zip :: checkDigit()
{
	this->Check = (this->A + this->B + this->C + this->D + this->E);
	if (this-> Check <= 10)
	{
		return (10 - this->Check);
	}
	else if (this-> Check > 10 && this->Check <= 20)
	{
		return (20 - this->Check);
	}
	else if (this-> Check > 20 && this->Check <= 30)
	{
		return (30 - this->Check);
	}
	else if (this->Check > 30 && this->Check <= 40)
	{
		return (40 - this->Check);
	}
	else
	{
		return (50 - this->Check);
	}
	return -1;
}

string Zip :: encodeZip()
{
	this->Check = Zip :: checkDigit();
  int l[10] = {1,2,3,4,5,6,7,8,9,0};
  string code[10] = {":::||", "::|:|", "::||:", ":|::|", ":|:|:", "::||:", "|:::|", "|::|:", "|:|::", "||:::"};
  string num1, num2, num3, num4, num5, num6;

  for (int i = 0; i < 10; i++)
  {
    if (this->A == l[i])
    {
      num1 = code[i];
    }
  }
  
  for (int i = 0; i < 10; i++)
  {
  	if (this->B == l[i])
  	{
  		num2 = code[i];
  	}
  }
  
  for (int i = 0; i < 10; i++)
  {
  	if (this->C == l[i])
  	{
  		num3 = code[i];
  	}
  }
  
  for (int i = 0; i < 10; i++)
  {
  	if (this->D == l[i])
  	{
  		num4 = code[i];
  	}
  }
  
  for (int i = 0; i < 10; i++)
  {
  	if (this->E == l[i])
  	{
  		num5 = code[i];
  	}
  }
  
  for (int i = 0; i < 10; i++)
  {
  	if (this->Check == l[i])
  	{
  		num6 = code[i];
  	}
  }
  return ("|" + num1 + " " + num2 + " " + num3 + " " + num4 + " " + num5 + " " + num6 + "|");
}
#endif