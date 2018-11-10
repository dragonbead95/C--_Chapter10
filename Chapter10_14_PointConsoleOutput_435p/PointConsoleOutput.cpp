#include <iostream>	

using std::cout;
using std::endl;
using std::ostream;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
	{

	}
	void ShowPosition() const
	{
		cout << "[" << xpos << ", " << ypos << endl;
	}
	friend ostream& operator<<(ostream&, const Point&);
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << "[" << pos.xpos << ", " << pos.ypos << "]" << endl;
	return os;
}

int main(void)
{
	Point pos1(1, 3);
	cout << pos1;
	Point pos2(101, 303);
	cout << pos2;

	system("pause");
	return 0;
}