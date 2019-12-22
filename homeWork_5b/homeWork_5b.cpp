#include <iostream>
using namespace std;

class triangle
{
private:
	/* data */
	int a, b, c;
public:
	triangle(int aIn, int bIn, int cIn);
	~triangle();
	const char* jdg();

};

triangle::triangle(int aIn, int bIn, int cIn)
{
	a = aIn;
	b = bIn;
	c = cIn;
}

triangle::~triangle()
{
}
const char* triangle::jdg()
{
	int sqrA = a * a, sqrB = b * b, sqrC = c * c;
    if (a<b+c&&c>a-b)
    {
        if (a == b && b == c)
	{
		return "A equileteral triangle";
	}
	else if (a == b || b == c || a == c)
	{
		return "A isosceles triangle";
	}
	else if (sqrA == sqrB + sqrC)
	{
		return "A right triangle";
	}
	else  
	{
		return "A triangle";
	}

    }
    
	

	else
	{
		return "Not a triangle";
	}


}

int main() {

	int a, b, c;
	int tri[3];
	for (size_t i = 0; i < 3; i++)
	{

		cin >> tri[i];
	}
	for (size_t i = 0; i < 2; i++)
	{
		int n(0);
		for (size_t i = 0; i < 2- n; i++)
		{
			int  temp(0);
			if (tri[i] < tri[i + 1])
			{
				temp = tri[i + 1];
				tri[i + 1] = tri[i];
				tri[i] = temp;
			}
		}
		n++;
	}


	triangle tr1(tri[0], tri[1], tri[2]);
	cout << tr1.jdg();



	return 0;
}