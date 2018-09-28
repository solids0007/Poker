#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
int n = 52, r, carta;
int getRandNum[52];
int arr[52] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51};//atul;
srand ( time(NULL) );
// generate 10 "unique" values...
for (int x = 0; x < 5; ++x)
{
carta = r = 0;
r = rand() % n; // get random number from 0 to n
carta = arr[r]; // the sought random no intothing w/ it
getRandNum[x] = arr[carta];
arr[r] = arr[n-1]; // replace the generated number
n--; // new count;

cout<<carta<<endl;
}

    cout<<"Arrojadas las 5 cartas"<<endl;


    /**for(int i=1;i<=52;i++){
    cartas = rand() % 52 + 1;
    cout<<i<<". ";
    cout << cartas << endl;
    }

    return 0;**/


}


