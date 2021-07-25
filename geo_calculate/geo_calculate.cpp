#include <iostream>
#include "shape.h"
using namespace std;
int main()
{
		int calculate, area, perimeter, volume, ans = 0;
		float data1, data2, data3, data4;
		do{
		cout << "What do you want calculate?" << endl;
		cout << "1-Area\n" << "2-Perimeter\n" << "3-Volume" << endl;
		cin >> calculate;
		while (calculate < 1 || calculate >= 4)
		{
			cout << "Wrong value entered.Please fix it." << endl;
			cin >> calculate;
		}
		switch (calculate)
		{
		case 1:
			cout << "which geometrik shape do you want to calculate the area of?" << endl;
			cout << "1-Square\n2-Rectangle\n3-Triangle\n4-Parallelogram\n5-Rhombus\n6-Trapezoid\n7-Deltoid\n8-Circle\n9-Regular Polygon" << endl;
			cin >> area;
			while (area < 1 || area>10)
			{
				cout << "Wrong value entered.Please fix it." << endl;
				cin >> area;
			}
			switch (area)
			{
			case 1:
			{
				cout << "Please enter the side of the square." << endl;
				cin >> data1;
				while (data1 <= 0)
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1;
				}
				Square object(data1);
				object.display();
			}
			break;
			case 2: {
				cout << "Please enter the long edge." << endl;
				cin >> data1;
				cout << "Please enter the short edge." << endl;
				cin >> data2;
				while (data1 < data2 || (data1 <= 0 || data2 <= 0))
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2;
				}
				Rectangle object(data1, data2);
				object.display();
			}
				  break;
			case 3: {
				cout << "Please enter the length of the base edge." << endl;
				cin >> data1;
				cout << "Please enter the height of the triangle." << endl;
				cin >> data2;
				while (data1 <= 0 || data2 <= 0)
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2;
				}
				Triangle object(data1, data2);
				object.display();
			}
				  break;
			case 4: {
				cout << "Please enter the length of the base edge." << endl;
				cin >> data1;
				cout << "Please enter the height of the parallelogram." << endl;
				cin >> data2;
				while (data1 <= 0 || data2 <= 0)
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2;
				}
				Paralleogram object(data1, data2);
				object.display();
			}
				  break;
			case 5: {
				cout << "Please enter the long diagonal." << endl;
				cin >> data1;
				cout << "Please enter the short diagonal" << endl;
				cin >> data2;
				while (data1 < data2 || (data1 <= 0 || data2 <= 0))
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2;
				}
				Rhombus object(data1, data2);
				object.display();
			}
				  break;
			case 6: {
				cout << "Please enter the top edge of the trapezoid." << endl;
				cin >> data1;
				cout << "Please enter the bottom edge of the trapezoid." << endl;
				cin >> data2;
				cout << "Please enter the height of the trapezoid" << endl;
				cin >> data3;
				while ((data1 < data2) || (data1 <= 0 || data2 <= 0 || data3 <= 0))
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2 >> data3;
				}
				Trapezoid object(data1, data2, data3);
				object.display();
			}
				  break;
			case 7: {
				cout << "Please enter the short diagonal of the deltoid." << endl;
				cin >> data1;
				cout << "Please eneter the long diagonal of the deltoid." << endl;
				cin >> data2;
				while (data1 < data2 || (data1 <= 0 || data2 <= 0))
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2;
				}
				Deltoid object(data1, data2);
				object.display();
			}
				  break;
			case 8: {
				cout << "Please enter the radius of the circle." << endl;
				cin >> data1;
				cout << "Please enter the number of pi." << endl;
				cin >> data2;
				while ((data1 <= 0 || data2 <= 0))
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2;
				}
				Circle object(data1, data2);
				object.display();
			}
				  break;
			default: {
				cout << "Please enter the inner radius of the regular polygon." << endl;
				cin >> data1;
				cout << "Please enter the perimeter of the regular polygon." << endl;
				cin >> data2;
				while ((data1 <= 0 || data2 <= 0))
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2;
				}
				Polygon object(data1, data2);
				object.display();
			}
				   break;
			}
			break;
		case 2:
			cout << "Which geometric shape do you want to calculate its perimeter?" << endl;
			cout << "1-Square\n2-Rectangle\n3-Triangle\n4-Parallelogram\n5-Rhombus\n6-Trapezoid\n7-Deltoid\n8-Circle\n9-Regular Polygon" << endl;
			cin >> perimeter;
			while (perimeter < 1 || perimeter>10)
			{
				cout << "Wrong value entered.Please fix it." << endl;
				cin >> perimeter;
			}
			switch (perimeter)
			{
			case 1: {
				cout << "Please enter the side of the square." << endl;
				cin >> data1;
				while (data1 <= 0)
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1;
				}
				Squareperi object(data1);
				object.display();
			}
				  break;
			case 2: {
				cout << "Please enter the long edge." << endl;
				cin >> data1;
				cout << "Please enter the short edge." << endl;
				cin >> data2;
				while (data1 < data2 || (data1 <= 0 || data2 <= 0))
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2;
				}
				Rectangleperi object(data1, data2);
				object.display();
			}
				  break;
			case 3: {
				cout << "Please enter the sides of the triangle." << endl;
				cin >> data1 >> data2 >> data3;
				while (data1 <= 0 || data2 <= 0 || data3 <= 0)
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2 >> data3;
				}
				Triangleperi object(data1, data2, data3);
				object.display();
			}
				  break;
			case 4: {
				cout << "Please enter the long side of the parallelogram." << endl;
				cin >> data1;
				cout << "Please enter the short side of the parallelogram." << endl;
				cin >> data2;
				while (data1 < data2 || (data1 <= 0 || data2 <= 0))
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2;
				}
				Parallelogramperi object(data1, data2);
				object.display();
			}
				  break;
			case 5: {
				cout << "Please enter the side of the rhombus." << endl;
				cin >> data1;
				while (data1 <= 0)
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1;
				}
				Rhombusperi object(data1);
				object.display();
			}
				  break;
			case 6: {
				cout << "Please enter the sides of the trapezoid." << endl;
				cin >> data1 >> data2 >> data3 >> data4;
				while (data1 <= 0 || data2 <= 0 || data3 <= 0 || data4 <= 0)
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2 >> data3 >> data4;
				}
				Trapezoidperi object(data1, data2, data3, data4);
				object.display();
			}
				  break;
			case 7: {
				cout << "Please enter the short diagonal of the deltoid." << endl;
				cin >> data1;
				cout << "Please eneter the long diagonal of the deltoid." << endl;
				cin >> data2;
				while (data1 < data2 || (data1 <= 0 || data2 <= 0))
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2;
				}
				Deltoidperi object(data1, data2);
				object.display();
			}
				  break;
			case 8: {
				cout << "Please enter the radius of the circle." << endl;
				cin >> data1;
				cout << "Please enter the number of pi." << endl;
				cin >> data2;
				while (data1 <= 0 || data2 <= 0)
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2;
				}
				Circleperi object(data1, data2);
				object.display();
			}
				  break;
			default: {
				cout << "Please enter the number of sides of the polygon." << endl;
				cin >> data1;
				cout << "Please enter the side length of the polygon." << endl;
				cin >> data2;
				while (data1 <= 0 || data2 <= 0)
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2;
				}
				Polygonperi object(data1, data2);
				object.display();
			}
				   break;
			}
			break;
		default:
			cout << "Which geometric shape do you want to calculate the volume of?" << endl;
			cout << "1-Cube\n2-Rectangular Prism\n3-Cylinder\n4-Cone\n5-Square Pyramid\n6-Sphere" << endl;
			cin >> volume;
			while (volume < 1 || volume>10)
			{
				cout << "Wrong value entered.Please fix it." << endl;
				cin >> volume;
			}
			switch (volume)
			{
			case 1: {
				cout << "Please enter the edge of the cube." << endl;
				cin >> data1;
				while (data1 <= 0)
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1;
				}
				Cube object(data1);
				object.display();
			}
				  break;
			case 2: {
				cout << "Please enter the long side of the rectangular prism." << endl;
				cin >> data1;
				cout << "Please enter the short side of the rectangular prism." << endl;
				cin >> data2;
				cout << "Please enter the height of the rectangular prism." << endl;
				cin >> data3;
				while (data1 < data2 || (data1 <= 0 || data2 <= 0 || data3 <= 0))
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2 >> data3;
				}
				Prism object(data1, data2, data3);
				object.display();
			}
				  break;
			case 3: {
				cout << "Please enter the base radius of the cylinder." << endl;
				cin >> data1;
				cout << "Please enter the number of pi." << endl;
				cin >> data2;
				cout << "Please enter the height of the cylinder." << endl;
				cin >> data3;
				while (data1 <= 0 || data2 <= 0 || data3 <= 0)
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2 >> data3;
				}
				Cylinder object(data1, data2, data3);
				object.display();
			}
				  break;
			case 4: {
				cout << "Please enter the base radius of the cone." << endl;
				cin >> data1;
				cout << "Please enter the number of pi." << endl;
				cin >> data2;
				cout << "Please enter the height of the cone." << endl;
				cin >> data3;
				while (data1 <= 0 || data2 <= 0 || data3 <= 0)
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2 >> data3;
				}
				Cone object(data1, data2, data3);
				object.display();
			}
				  break;
			case 5: {
				cout << "Please enter the length of the base edge." << endl;
				cin >> data1;
				cout << "Please enter the height of the square pyramid." << endl;
				cin >> data2;
				while (data1 <= 0 || data2 <= 0)
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2;
				}
				Pyramid object(data1, data2);
				object.display();
			}
				  break;
			default: {
				cout << "Please enter the radius of the sphere." << endl;
				cin >> data1;
				cout << "Please enter the number of pi." << endl;
				cin >> data2;
				while (data1 <= 0 || data2 <= 0)
				{
					cout << "Wrong value entered.Please fix it." << endl;
					cin >> data1 >> data2;
				}
				Sphere object(data1, data2);
				object.display();
			}
				   break;
			}
			break;
		}
		cout << "Do you want to do another calculation?\n1-Yes\n2-No" << endl;
		cin >> ans;
		while (!(ans==1)&&!(ans==2))
		{
			cout << "Wrong value entered.Please fix it." << endl;
			cin >> ans;
		}
	}while (ans==1);
}
