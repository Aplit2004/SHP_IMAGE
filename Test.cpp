#include<iostream>
#include<cassert>
#include "Pixel.cpp"
using namespace std;
int main(){
	Color c;
	c.R = 255;
	assert(c.R == 255);
	assert(c.G == 0);

	Color c1(BLUE);
	assert(c1.R == 0);
	assert(c1.G == 0);
	assert(c1.B == 255);
	assert(c1.A == 0);

	Point p;
	assert(p.x==0);
	assert(p.y==0);
	
	p.x=5;
	assert(p.x==5);
	p.y=10;
	assert(p.y==10);
	
	Point p1(7,-7);
	assert(p1.x==7);
	assert(p1.y==-7);
	
	Point p2(p1);
	assert(p2.x==p1.x);
	assert(p2.y==p1.y);
	p2.x=77; p2.y=12;
	assert(p1.x==7);
	assert(p1.y==-7);
	
	cout<<"Tests complete!"<<endl;
}