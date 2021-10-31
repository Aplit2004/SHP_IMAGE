#include"Pixel.cpp"
#include"lodepng.cpp"
#include<vector>
class Image{
private:
    vector <Pixel> pixel;
    int width, height;
public:
    Image():width(0), height(0){}
	Image():p(p){}
	Image(const Image& img):p(img.p){}
}