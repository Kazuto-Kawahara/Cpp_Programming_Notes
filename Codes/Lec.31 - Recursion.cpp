#include <iostream>
using namespace std;

int factorialFinder(int x);

int main()
{

    cout << factorialFinder(5) << endl;

    return 0;
}


int factorialFinder(int x)
{
    if (x == 1)
    {
        return 1;
    }else
    {
        return x * factorialFinder(x-1);
    }


}




//What recursion is It's a function that can call itself. #Weird!