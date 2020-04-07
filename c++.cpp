#include <iostream>

using namespace std;

int main()
{
	double score[] = {11,22,33,44,55};
	double * ptr_score = score;
	
	cout << score << "\t" << score+1<< endl;
	cout << ptr_score << "\t" << ptr_score+1;
	
	
	return 0;
}
