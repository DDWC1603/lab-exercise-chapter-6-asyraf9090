//this is not a complete program. please finish the program. thank you.
#include <iostream>
using namespace std;

int mark[]={19,10,8,17,9};
int main()
{
	//insert different value to the third element
	//tukar third element tu dengan value lain
	cout << mark[2] << endl;
	mark[2]= 7;
	cout << "The third element value:"<< mark[2] << endl;

	//get user input and insert sub the third element
	//tukar the third element yang baru ditukar tu dengan input dari user
	cin >> mark[2];
	cout << "The new third element value:"<< mark[2] << endl;
	
	//print the first element of the array
	cout << "The first element value"<< mark[0] << endl;

	//print the ith element of the array
	cout << "The last element value:"<<  mark[4] << endl;

}
