
#include <iostream>
using namespace std;

class Stairs {

public:

// Returns count of ways to reach n-th stair
	int findStep(int n)
	{
		if (n == 0)
			return 1;
		else if (n < 0)
			return 0;

		else
			return findStep(n - 3) + findStep(n - 2)
				+ findStep(n - 1);
	}
};

int main()
{
	Stairs g;
	int n;
    cout<<"Enter number of steps to climb: ";
    cin>>n;
	cout << g.findStep(n);
	return 0;
}

