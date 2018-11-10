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
	
	Point* operator+=(const Point &ref)
	{
		xpos += ref.xpos;
		ypos += ref.ypos;
		return this;
	}
	Point* operator-=(const Point &ref)
	{
		xpos -= ref.xpos;
		ypos -= ref.ypos;
		return this;
	}
};



int main(void)
{
	Point pos1(3, 4);
	Point pos2(7, 6);

	(pos1 += pos2)->ShowPosition();
	(pos1 -= pos2)->ShowPosition();


	system("pause");
	return 0;
}

