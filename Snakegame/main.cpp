#include <iostream>
#include <conio.h>

using namespace std;
bool gameover;
const int width=40, height=20;
int x, y, fruitX, fruitY;
enum edirection{ STOP=0, LEFT, RIGHT, UP, DOWN};
edirection dir;
void setup()
{
        gameover=false;
        dir=STOP;
        x=width / 2;
        y=height / 2;
        fruitX= x % width;
        fruitY= y % height;
}

void draw()
{

    for(int i=0; i<width; i++)
        cout<<"#";
    cout<<endl;

    for(int i=0; i<height; i++)
    {
        for(int j=0; j<width; j++)
        {
            if(j==0)
                cout<<"#";
            else
                cout<<" ";
            if(j==width-1)
                cout<<"#";
        }
        cout<<endl;
    }
    for(int i=0; i<width; i++)
        cout<<"#";
    cout<<endl;
}

void input()
{

}

void logic()
{

}

int main()
{
    setup();
    while(!gameover)
    {
            draw();
            input();
            logic();
    }
    return 0;
}
