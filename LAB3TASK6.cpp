#include <iostream>
using namespace std;
int main ()
{
	int choice;
	int step = 1;


	cout << "When does Dora say 'Swiper! No swiping!'?" << endl;
	cout << "1. Before Swiper takes the step" << endl;
	cout << "2. After Swiper takes the step" << endl;
	cout << "Enter your choice: " << endl;
	cin >> choice; 

	if (choice == 1) {
		cout << "Dora says: Swiper! No swiping!" << endl;
		cout << "Oh man!" << endl;
	}
	else if (choice == 2) {
		cout << "Dora says: Swiper! No swiping!" << endl;
		cout << "Oh man!" << endl;
	}
	else {
		cout << "Swiper stole the map!" << endl;
		cout << "Swiper ran away!" << endl;
	}

	return 0;
}