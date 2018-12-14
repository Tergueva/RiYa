#include <iostream>
#include "funcs.h"
using namespace std;
int main()

{
	double a, b;
    char c;
    cout << "Input expression like: a*b; * as C; C can be '*','/','+','-'" << endl;
    cin >> a;
    cin >> c;
    cin >> b;
	 switch (c)
    {
    case '+': cout << a<<"+"<<b<<"="<< plus(a, b) << endl;
        break;
	case '-': cout << a<<"-"<<b<<"="<< subtraction(a, b) << endl;
        break;
    case '/': cout << a<<"/"<<b<<"="<< division(a,b)<<endl;
        break;
    case '*':cout << a<<"*"<<b<<"="<< multiplication(a,b)<<endl;
        break;
    deafult: cout << "Err"<<endl;
    }

    
system("pause");

return 0;
}