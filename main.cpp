#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include <math.h>
using namespace std;
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(1000, 950), "Screen Saver");
    window.setFramerateLimit(60);
    Clock c1;

    Vertex v1;
    int a = rand() % 256 + 1;
    int b = rand() % 256 + 1;
    int c = rand() % 256 + 1;

    float xpos = 0;
    int ypos = 400;

    //creating lines
    vector <Vertex> dots;
    vector <Vertex> dots2;
    vector <Vertex> dots3;
    vector <Vertex> dots4;
    vector <Vertex> dots5;
    vector <Vertex> dots6;
    vector <Vertex> dots7;
    vector <Vertex> dots8;
    vector <Vertex> dots9;
    vector <Vertex> dots10;
    vector <Vertex> dots11;
    vector <Vertex> dots12;
    vector <Vertex> dots13;
    vector <Vertex> dots14;
    vector <Vertex> dots15;
    vector <Vertex> dots16;
    vector <Vertex> dots17;
    vector <Vertex> dots18;
    vector <Vertex> dots19;
    vector <Vertex> dots20;


    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

    //Vertex v1(Vector2f(200,200), Color::Yellow);


    //gotta figure out how to do 1 dot per frame (probably without for loop)
    dots.clear();
    dots2.clear();
    dots3.clear();
    dots4.clear();
    dots5.clear();
    dots6.clear();
    dots7.clear();
    dots8.clear();
    dots9.clear();
    dots10.clear();
    dots11.clear();
    dots12.clear();
    dots13.clear();
    dots14.clear();
    dots15.clear();
    dots16.clear();
    dots17.clear();
    dots18.clear();
    dots19.clear();
    dots20.clear();

    xpos++;
    for (float i = 0; i < 1000; i++){


            //have y position slowly move upwards and tp them down once off screen
        //horizontal
        dots.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i+xpos)/50.0)), Color(138, 49, 216)));
        dots2.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i-xpos)/50.0)), Color(138, 49, 216)));
        dots3.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i+xpos)/50.0)+100), Color(138, 49, 216)));
        dots4.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i-xpos)/50.0)+100), Color(138, 49, 216)));
        dots5.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i+xpos)/50.0)+200), Color(138, 49, 216)));
        dots6.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i-xpos)/50.0)+200), Color(138, 49, 216)));
        dots7.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i+xpos)/50.0)+300), Color(138, 49, 216)));
        dots8.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i-xpos)/50.0)+300), Color(138, 49, 216)));
        dots9.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i+xpos)/50.0)+400), Color(138, 49, 216)));
        dots10.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i-xpos)/50.0)+400), Color(138, 49, 216)));
        dots11.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i+xpos)/50.0)+500), Color(138, 49, 216)));
        dots12.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i-xpos)/50.0)+500), Color(138, 49, 216)));
        dots13.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i-xpos)/50.0)+600), Color(138, 49, 216)));
        dots14.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i+xpos)/50.0)+600), Color(138, 49, 216)));
        dots15.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i-xpos)/50.0)+700), Color(138, 49, 216)));
        dots16.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i+xpos)/50.0)+700), Color(138, 49, 216)));
        dots17.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i-xpos)/50.0)+800), Color(138, 49, 216)));
        dots18.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i+xpos)/50.0)+800), Color(138, 49, 216)));
        dots19.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i-xpos)/50.0)+900), Color(138, 49, 216)));
        dots20.push_back(Vertex(Vector2f(i , rand() % 60 + 50*sinf((i+xpos)/50.0)+900), Color(138, 49, 216)));
    }



// ctrl + shift + 'C'
//    a++;
//    b++;
//    c++;
//
//    if (a > 255)
//    {
//        a = rand() % 256 + 1;
//    }
//    if (b > 255)
//    {
//        b = rand() % 256 + 1;
//    }
//    if (c > 255)
//    {
//        c = rand() % 256 + 1;
//    }




        //Framerate
        cout<<1/c1.getElapsedTime().asSeconds()<<endl;
        c1.restart();


        window.clear();
        //drawing waves
        window.draw(&dots[0],  dots.size(), LinesStrip);
        window.draw(&dots2[0],  dots2.size(), LinesStrip);
        window.draw(&dots3[0],  dots3.size(), LinesStrip);
        window.draw(&dots4[0],  dots4.size(), LinesStrip);
        window.draw(&dots5[0],  dots5.size(), LinesStrip);
        window.draw(&dots6[0],  dots6.size(), LinesStrip);
        window.draw(&dots7[0],  dots7.size(), LinesStrip);
        window.draw(&dots8[0],  dots8.size(), LinesStrip);
        window.draw(&dots9[0],  dots9.size(), LinesStrip);
        window.draw(&dots10[0],  dots10.size(), LinesStrip);
        window.draw(&dots11[0],  dots11.size(), LinesStrip);
        window.draw(&dots12[0],  dots12.size(), LinesStrip);
        window.draw(&dots13[0],  dots13.size(), LinesStrip);
        window.draw(&dots14[0],  dots14.size(), LinesStrip);
        window.draw(&dots15[0],  dots15.size(), LinesStrip);
        window.draw(&dots16[0],  dots16.size(), LinesStrip);
        window.draw(&dots17[0],  dots17.size(), LinesStrip);
        window.draw(&dots18[0],  dots18.size(), LinesStrip);
        window.draw(&dots19[0],  dots19.size(), LinesStrip);
        window.draw(&dots20[0],  dots20.size(), LinesStrip);

        window.display();
    }

    return 0;
}
