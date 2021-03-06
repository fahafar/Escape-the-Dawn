#ifndef Rectangle_h__ 
#define  Rectangle_h__

class Rectangle
{
private:
	int height;
	int width;
	int x;
	int y;

public:
	Rectangle();
	int Height() const { return height; }
	void Height(float val) { height = val; }

	int Width() const { return width; }
	void Width(float val) { width = val; }
	
	int X() const { return x; }
	void X(int val) { x = val; }
	
	int Y() const { return y; }
	void Y(int val) { y = val; }

	int Left() const { return x; }

	int Right() const { return x+width; }

	int Top() const { return y; }

	int Bottom() const { return y+height; }
};

Rectangle::Rectangle()
{
	
}

#endif