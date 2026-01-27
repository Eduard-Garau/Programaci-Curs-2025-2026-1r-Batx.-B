#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    
   int n;
   cin >> n;//n casos
   
  for (int i = 0;i < n;i++){
    int a = -(10*10) -1; //nombre maxim
    cin >> a;   //legim el nombre de vegades A
    int d = -(10*10) -1; //nombre maxim
    cin >> d;   //legim el nombre de vegades A
    int h;
    h = sqrt(a*a+d*d);
    cout << h << endl;
  }
}