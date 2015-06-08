//7.3

#include<iostream>
struct box{
    char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void show_box(box);
void volume_box(box *b);

int main()
{
	box boxes={"dafengge",20,20,20,0};
	volume_box(&boxes);
	show_box(boxes);
	
	return 0;
}

void show_box(box b)
{
    using namespace std;
    cout<<"The maker of the box is: "<<b.maker<<endl;
	cout<<"The box's height is: "<<b.height<<endl;
	cout<<"The box's width is: "<<b.width<<endl;
	cout<<"The box's length is: "<<b.length<<endl;
	cout<<"The box's volume is: "<<b.volume<<endl;
}

void volume_box(box *b)
{
    (b->volume)=(b->height)*(b->width)*(b->length);
}