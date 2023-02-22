#include<iostream>

using namespace std;

void isZero(int sus) {
	cout << sus << " ";
	if (sus == 0)
		return;
	else
		return isZero(sus - 1);

}

int main() {

	isZero(9);
}