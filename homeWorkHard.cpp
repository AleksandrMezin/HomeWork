#include <iostream>

using namespace std;

void Switch (int *a, int*b){
    int temp = *a ;
    *a = *b;
    *b = temp;

}

int main(int argc, char** argv) {
   int i;
   int arr[] = {1, 1, 0, 0, 1, 0, 1, 1, 0, 0} ;
   //arr[0] = 1;
   //arr[1] = 1;
   //arr[2] = 0;
   //arr[3] = 0;
   //arr[4] = 1;
   //arr[5] = 0;
   //arr[6] = 1;
   //arr[7] = 1;
   //arr[8] = 0;
   //arr[9] = 0;

    Switch (&arr[0],&arr[2]);
    Switch (&arr[1],&arr[3]);
    Switch (&arr[4],&arr[5]);
    Switch (&arr[6],&arr[8]);
    Switch (&arr[7],&arr[9]);

    for (int i = 0; i < 10; i++)
        cout << arr[i] ;

 return 0;
}


//{1, 1, 0, 0, 1, 0, 1, 1, 0, 0}
