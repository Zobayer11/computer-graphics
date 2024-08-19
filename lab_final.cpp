#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

using namespace std;

void Menu() {
    cleardevice();

    setbkcolor(0);
    setcolor(15);
    settextstyle(3, HORIZ_DIR, 2);

    outtextxy(250,10,"MY MENU");
    outtextxy(100, 50, "1. My Name.");
    outtextxy(100, 100, "2. Rain Bow.");
    outtextxy(100, 150, "3. Customize Circle.");
    outtextxy(100, 200, "4. Customize Line Draw.");
    outtextxy(100, 250, "5. Doraemon.");
    outtextxy(100, 300, "6. Emoji");
    outtextxy(100, 350, "7. Exit.");
}

void myname(int x, int y) {

    cleardevice();
     setbkcolor(0);
     setcolor(15);
    line(x + 20, y, x + 20, y + 40);
    line(x + 20, y + 40, x + 10, y + 50);
    line(x + 10, y + 50, x, y + 40);

    x += 40;

    line(x, y, x, y + 50);
    line(x, y + 50, x + 20, y + 50);
    line(x + 20, y + 50, x + 20, y);

    x += 40;

    line(x, y, x, y + 50);
    line(x, y, x + 20, y);
    line(x + 20, y, x + 20, y + 25);
    line(x, y + 25, x + 20, y + 25);
    line(x, y + 50, x + 20, y + 50);
    line(x + 20, y + 25, x + 20, y + 50);

    x += 40;

    line(x, y + 50, x + 15, y);
    line(x + 30, y + 50, x + 15, y);
    line(x + 7, y + 25, x + 23, y + 25);

    x += 40;

    line(x, y, x + 15, y + 25);
    line(x + 30, y, x + 15, y + 25);
    line(x + 15, y + 25, x + 15, y + 50);

    x += 40;

    line(x, y, x, y + 50);
    line(x, y, x + 30, y);
    line(x, y + 25, x + 20, y + 25);
    line(x, y + 50, x + 30, y + 50);

    x += 40;

    line(x, y, x, y + 50);
    line(x, y, x + 20, y);
    line(x + 20, y, x + 20, y + 25);
    line(x, y + 25, x + 20, y + 25);
    line(x, y + 25, x + 30, y + 50);

    getch();
}
void rain_bow()
{
     cleardevice();
     setbkcolor(0);
     setcolor(15);
     int x=getmaxx()/2;
     int y=getmaxy()/2;
     for(int i=0;i<=200;i++)
     {
      setcolor(i/20);
      arc(x,y,0,180,20+i);
      delay(15);
     }

     getch();
}
void plotPoints(int xc, int yc, int x, int y) {
    putpixel(xc + x, yc + y, RED);
    putpixel(xc - x, yc + y, RED);
    putpixel(xc + x, yc - y, RED);
    putpixel(xc - x, yc - y, RED);
    putpixel(xc + y, yc + x, RED);
    putpixel(xc - y, yc + x, RED);
    putpixel(xc + y, yc - x, RED);
    putpixel(xc - y, yc - x, RED);

    delay(10);
}

void drawCircle(int xc, int yc, int r) {
    int x = 0, y = r;
    int d = 1 - r;

    plotPoints(xc, yc, x, y);

    while (x < y) {
        x++;
        if (d < 0) {
            d += 2 * x + 1;
        } else {
            y--;
            d += 2 * (x - y) + 1;
        }
        plotPoints(xc, yc, x, y);
    }
}

void customize_circle()
{
    int xc, yc, r;

    cout << "Enter the center of the circle (xc, yc): ";
    cin >> xc >> yc;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    setcolor(15);
    outtextxy(100, 50, "Abdullah Al Zobayer 3035");

    drawCircle(xc, yc, r);

    getch();

}

void line()
{
    cleardevice();
    setbkcolor(0);
    setcolor(15);
    int startx, starty, ex, ey;
    cout << "Enter startxing x and y : " << endl;
    cin >> startx >> starty ;
    cout << "Enter startxing x and y : " << endl;
    cin >> ex >> ey;

    int dx = abs(ex - startx);
    int dy = abs(ey - starty);

    int x = startx;
    int y = starty;
    int numSteps;

    if (dx > dy)
    {
        numSteps = dx;
    }
    else
    {
        numSteps = dy;
    }

    double xIncrement = round(((double)dx / (double)numSteps));
    double yIncrement = round(((double)dy / (double)numSteps));

    while (startx <= ex || starty <= ey)
    {
        putpixel(startx, starty, 14);

        startx += xIncrement;
        starty += yIncrement;
        delay(100);
    }

    getch();
}

void Doraemon(){

    cleardevice();
    setbkcolor(0);
    setcolor(15);
     int x = 400, y = 400;
     circle(x / 2, y / 2 - 20, 5);
     line(x / 2, y / 2 - 20 + 5, x / 2, y / 2);
     line(x / 2 - 20, y / 2, x / 2 + 20, y / 2);
     arc(x / 2, y / 2, 180, 360, 20);
     arc(x / 2, y / 2 + 20, 30, 150, 10);
     ellipse(x / 2 - 10, y / 2 - 35, 0, 360, 8, 15);
     ellipse(x / 2 - 10, y / 2 - 35, 0, 360, 2, 5);
     ellipse(x / 2 + 10, y / 2 - 35, 0, 360, 8, 15);
     ellipse(x / 2 + 10, y / 2 - 35, 0, 360, 2, 5);
     arc(x / 2, y / 2 - 10, 110, 250, 40);
     arc(x / 2, y / 2 - 10, 290, 70, 40);
     line(x / 2 - 15, y / 2 + 29, x / 2 + 15, y / 2 + 29);
     arc(x / 2, y / 2 - 20, 90, 270, 50);
     arc(x / 2, y / 2 - 20, 270, 90, 50);
     line(x / 2 - 20, y / 2 - 20, x / 2 - 45, y / 2 - 30);
     line(x / 2 - 20, y / 2 - 10, x / 2 - 45, y / 2 - 10);
     line(x / 2 - 20, y / 2, x / 2 - 45, y / 2 + 10);
     line(x / 2 + 20, y / 2 - 20, x / 2 + 45, y / 2 - 30);
     line(x / 2 + 20, y / 2 - 10, x / 2 + 45, y / 2 - 10);
     line(x / 2 + 20, y / 2, x / 2 + 45, y / 2 + 10);
     arc(x / 2 - 15, y / 2 + 70, 90, 200, 40);
     arc(x / 2 + 15, y / 2 + 70, 340, 90, 40);
     circle(x / 2 - 42, y / 2 + 80, 10);
     circle(x / 2 + 42, y / 2 + 80, 10);
     ellipse(x / 2 - 20, y / 2 + 65, 90, 250, 15, 40);
     ellipse(x / 2 + 20, y / 2 + 65, 290, 90, 15, 40);
     ellipse(x / 2 - 20, y / 2 + 110, 0, 360, 20, 10);
     ellipse(x / 2 + 20, y / 2 + 110, 0, 360, 20, 10);
     arc(x / 2, y / 2 + 60, 180, 360, 20);
     line(x / 2 - 20, y / 2 + 60, x / 2 + 20, y / 2 + 60);
     circle(x / 2, y / 2 + 39, 10);
     arc(x / 2, y / 2 + 70, 180, 360, 25);
     ellipse(x / 2 - 5, y / 2 + 60, 100, 200, 20, 30);
     ellipse(x / 2 + 5, y / 2 + 60, 340, 100, 20, 30);
     getch();
}

void emoji()
{
    cleardevice();
    setbkcolor(0);
    setcolor(15);

    setcolor(YELLOW);
    circle(200,200,100);
    setfillstyle(1,YELLOW);
    floodfill(200,200,YELLOW);

    setcolor(15);
    circle(150,170,25);
    setfillstyle(1,15);
    floodfill(150,170,15);

    circle(250,170,25);
    setfillstyle(1,15);
    floodfill(250,170,15);

    setcolor(0);
    for(int i=1;i<=33;i++)
    {
     ellipse(200,230,180,0,40,20+i);
    }
    setcolor(15) ;
    line(200,250,200,285);
    line(180,249,180,276);
    line(220,249,220,276);

    setcolor(0);
    circle(150,155,10);
    setfillstyle(1,0);
    floodfill(150,155,0);

    setcolor(0);
    circle(250,155,10);
    setfillstyle(1,0);
    floodfill(250,155,0);

    getch();
}
int main()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

    int choice;

    Menu();

    while(1)
    {
        choice = getch();

        switch (choice)
        {
        case '1':
            outtextxy(200, 400, "You chose option 1!");
            delay(1000);
            myname(50, 100);
            break;
        case '2':
            outtextxy(200, 400, "You chose option 2!");
            delay(1000);
            rain_bow();
            break;
        case '3':
            outtextxy(200, 400, "You chose option 3!");
            delay(1000);
            cleardevice();
            setbkcolor(0);
            setcolor(15);
            customize_circle();
            break;
        case '4':
            outtextxy(200, 400, "You chose option 4!");
            delay(1000);
            line();
            break;
        case '5':
            outtextxy(200, 400, "You chose option 5!");
            delay(1000);
            Doraemon();
            break;
        case '6':
            outtextxy(200, 400, "You chose option 6!");
            delay(1000);
            emoji();
            break;
        case '7':
            closegraph();
            outtextxy(200, 400, "You want to exit program");
            delay(1000);
            exit(0);
            break;
        default:
            outtextxy(200, 400, "Invalid option.");
            delay(1000);
            break;
        }

        delay(1000);
        Menu();
    }

    getch();
    closegraph();

    return 0;
}


