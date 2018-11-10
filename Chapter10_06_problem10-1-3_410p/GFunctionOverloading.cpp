#include <iostream>

using std::cout;
using std::endl;

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
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
	friend bool operator==(const Point &ref1,const Point &ref2);
	friend bool operator!=(const Point &ref,const Point &ref2);
};

bool operator==(const Point &ref1, const Point &ref2)
{
	if (ref1.xpos == ref2.xpos && ref1.ypos == ref2.ypos)
	{
		return true;
	}
	else {
		return false;
	}
}

bool operator!=(const Point &ref1, const Point &ref2)
{
	if (ref1.xpos == ref2.xpos && ref1.ypos == ref2.ypos)
	{
		return false;
	}
	else {
		return true;
	}
}

int main(void)
{
	Point pos1(3, 3);
	Point pos2(3, 3);

	cout << "pos1==pos2 : " << (pos1 == pos2) << endl;
	cout << "pos1!=pos2 : " << (pos1 != pos2) << endl;
	system("pause");
	return 0;
}

