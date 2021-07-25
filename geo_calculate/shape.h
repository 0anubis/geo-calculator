#include <iostream>
#include <math.h>
using namespace std;
class Square {
protected:
	float data;
public:
	Square(float dat = 0) {
		data = dat;
	}
	void setdata(float dat);
	float getdata() {
		return data;
	}
	void display();
};
void Square::setdata(float dat) {
	data = dat;
}
void Square::display() {
	cout << "RESULT=" << data * data << endl;
}
class Rectangle {
protected:
	float data1, data2;
public:
	Rectangle(float dat1=0, float dat2=0) {
		data1 = dat1;
		data2 = dat2;
	}
	void setdata(float dat1, float dat2) {
		data1 = dat1;
		data2 = dat2;
	}
	float getdata() {
		return data1,data2;
	}
	void display() {
		cout << "RESULT=" << data1 * data2 << endl;
	}
};
class Triangle :public Rectangle {
public:
	Triangle(float dat1=0, float dat2=0) {
		data1 = dat1;
		data2 = dat2;
	}
	void display() {
		cout << "RESULT=" << (data1 * data2) / 2 << endl;
	}
};
class Paralleogram :public Rectangle {
public:
	Paralleogram(float dat1=0, float dat2=0) {
		data1 = dat1;
		data2 = dat2;
	}
	void display() {
		cout << "RESULT=" << data1 * data2 << endl;
	}
};
class Rhombus :public Rectangle {
public:
	Rhombus(float dat1=0, float dat2=0) {
		data1 = dat1;
		data2 = dat2;
	}
	void display() {
		cout << "RESULT=" << data1 * data2/2 << endl;
	}
};
class Trapezoid {
protected:
	float data1, data2, data3;
public:
	Trapezoid(float dat1 = 0, float dat2 = 0, float dat3 = 0) {
		data1 = dat1;
		data2 = dat2;
		data3 = dat3;
	}
	void setdata(float dat1, float dat2, float dat3) {
		data1 = dat1;
		data2 = dat2;
		data3 = dat3;
	}
	float getdata() {
		return data1, data2, data3;
	}
	void display() {
		cout << "RESULT=" << (data1 + data2) * data3 / 2 << endl;
	}
};
class Deltoid :public Rectangle {
public:
	Deltoid(float dat1=0,float dat2=0) {
		data1 = dat1;
		data2 = dat2;
	}
	void display() {
		cout << "RESULT=" << data1 * data2 / 2 << endl;
	}
};
class Circle :public Rectangle {
public:
	Circle(float dat1=0, float dat2=0) {
		data1 = dat1;
		data2 = dat2;
	}
	void display() {
		cout << "RESULT=" << data2*(pow(data1,2)) << endl;
	}
};
class Polygon :public Rectangle {
public:
	Polygon(float dat1=0, float dat2=0) {
		data1 = dat1;
		data2 = dat2;
	}
	void display() {
		cout << "RESULT=" << data1*data2/2 << endl;
	}
};
class Squareperi :public Square {
public:
	Squareperi(float dat1=0) {
		data = dat1;
	}
	void display() {
		cout << "RESULT=" << data * 4 << endl;
	}
};
class Rectangleperi :public Rectangle {
public:
	Rectangleperi(float dat1=0,float dat2=0) {
		data1 = dat1;
		data2 = dat2;
	}
	void display() {
		cout << "RESULT=" << 2 * (data1 + data2)<<endl;
	}
};
class Triangleperi :public Trapezoid {
public:
	Triangleperi(float dat1=0, float dat2=0, float dat3=0) {
		data1 = dat1;
		data2 = dat2;
		data3 = dat3;
	}
	void display() {
		cout << "RESULT=" << data1 + data2 + data3 << endl;
	}
};
class Parallelogramperi :public Rectangle {
public:
	Parallelogramperi(float dat1=0, float dat2=0) {
		data1 = dat1;
		data2 = dat2;
	}
	void display() {
		cout << "RESULT=" << 2 * (data1 + data2);
	}
};
class Rhombusperi :public Square {
public:
	Rhombusperi(float dat1 = 0) {
		data = dat1;
	}
	void display() {
		cout << "RESULT=" << 4 * data<<endl;
	}
};
class Trapezoidperi {
private:
	float data1, data2, data3, data4;
public:
	Trapezoidperi(float dat1=0, float dat2=0, float dat3=0, float dat4=0) {
		data1 = dat1;
		data2 = dat2;
		data3 = dat3;
		data4 = dat4;
	}
	void setdata(float dat1, float dat2, float dat3, float dat4) {
		data1 = dat1;
		data2 = dat2;
		data3 = dat3;
		data4 = dat4;
	}
	float getdata() {
		return data1, data2, data3, data4;
	}
	void display() {
		cout << "RESULT=" << data1 + data2 + data3 + data4<<endl;
	}
};
class Deltoidperi :public Rectangle {
public:
	Deltoidperi(float dat1 = 0, float dat2 = 0) {
		data1 = dat1;
		data2 = dat2;
	}
	void display() {
		cout << "RESULT=" << 2 * (data1 + data2) << endl;
	}
};
class Circleperi :public Rectangle {
public:
	Circleperi(float dat1 = 0, float dat2 = 0) {
		data1 = dat1;
		data2 = dat2;
	}
	void display() {
		cout << "RESULT=" << 2 * data1 * data2<<endl;
	}
};
class Polygonperi :public Rectangle {
public:
	Polygonperi(float dat1 = 0, float dat2 = 0) {
		data1 = dat1;
		data2 = dat2;
	}
	void display() {
		cout << "RESULT=" << 2 * data1 * data2 << endl;
	}
};
class Cube :public Square {
public:
	Cube(float dat = 0) {
		data = dat;
	}
	void display() {
		cout << "RESULT=" <<pow(data,3) <<endl;
	}
};
class Prism :public Trapezoid {
public:
	Prism(float dat1 = 0, float dat2 = 0, float dat3 = 0) {
		data1 = dat1;
		data2 = dat2;
		data3 = dat3;
	}
	void display() {
		cout << "RESULT=" << data1 * data2 * data3 << endl;
	}
};
class Cylinder :public Trapezoid {
public:
	Cylinder(float dat1 = 0, float dat2 = 0, float dat3 = 0) {
		data1 = dat1;
		data2 = dat2;
		data3 = dat3;
	}
	void display() {
		cout << "RESULT=" << pow(data1,2) * data2 * data3 << endl;
	}
};
class Cone : public Trapezoid{
public:
	Cone(float dat1 = 0, float dat2 = 0, float dat3 = 0) {
		data1 = dat1;
		data2 = dat2;
		data3 = dat3;
	}
	void display() {
		cout << "RESULT=" << pow(data1,2) * data2 * data3/3 << endl;
	}
};
class Pyramid :public Rectangle {
public:
	Pyramid(float dat1 = 0, float dat2 = 0) {
		data1 = dat1;
		data2 = dat2;
	}
	void display() {
		cout << "RESULT=" << pow(data1, 2) * data2 / 3 << endl;
	}
};
class Sphere :public Rectangle {
public:
	Sphere(float dat1 = 0, float dat2 = 0) {
		data1 = dat1;
		data2 = dat2;
	}
	void display() {
		cout << "RESULT=" << pow(data1,3)*data2*4/3<< endl;
	}
};