#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    srand((unsigned) time(NULL));

    int random;

    for(int i=1; i<=5; i++){

        random = rand() % 10;

        cout<<random<<endl;
    }
   
    system("pause");

    return 0;
}