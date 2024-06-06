#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

void draw(int x0, int y0, int x1, int y1) {
	bool swap = false;
	if (abs(y1 - y0) > abs(x1 - x0)) {
		std::swap(x0, y0);
		std::swap(x1, y1);
		swap = true;
	}

	if (x0 > x1) {
		std::swap(x0, x1);
		std::swap(y0, y1);

	}
	
	double y = y0;
	int x = x0;
	double anstieg;
	if (x1- x0 == 0) {
		anstieg = 0;
	}
	else {
		anstieg = static_cast<double>(y1 - y0) / (x1 - x0);
	}
	cout << " " << x0 << " "<< y0 << " "<< x1 << " " << y1;
	while (x <= x1) {
		if (swap) {
			//canvas.set_pixel(y, round(x));
			cout << "x" << round(y) << "y" << x << "\n";
		}
		else {
			//canvas.set_pixel(x, round(y));
			cout << "x" << x << "y" << round(y) << "\n";
		}
		y += anstieg;
        x++;
	}
}

void draw_b(int x0, int y0, int x1, int y1) {
	bool swap = false;
	if (abs(y1 - y0) > abs(x1 - x0)) {
		std::swap(x0, y0);
		std::swap(x1, y1);
		swap = true;
	}

	if (x0 > x1) {
		std::swap(x0, x1);
		std::swap(y0, y1);

	}

	int add_y;
	if (y0 > y1) {
		add_y = -1;
	} else {
		add_y = 1;
	}


	int x = x0;
	double y = y0;
	double error = 0;
	double anstieg = abs(static_cast<double>(y1 - y0) / (x1 - x0));
	
	//cout << " " << x0 << " "<< y0 << " "<< x1 << " " << y1;
	while (x <= x1) {
		if (swap) {
			//canvas.set_pixel(y, x);
			cout << "x" << y << "y" << x << "\n";

		}
		else {
			//canvas.set_pixel(x, y);
			cout << "x"<< x << "y" << y << "\n";
		}
		error += anstieg;
		if (error >= 0.5) {
			y+= add_y;
			error -= 1;
		}

	
		x++;
	}
}

int main(void) {
    //draw(0, 0, 10, 3);
	//cout << "\n";
	//draw (10, 3, 0 ,0);
	//cout << "\n";
	//draw (0, 3, 10 ,0);
	//cout << "\n";
	//draw (0, 0, 1 ,9);	
	draw(0, 3, 10, 0);
	cout << "\n";
	draw_b(0, 3, 10, 0);
    return 0;
}