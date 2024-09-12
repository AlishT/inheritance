
#include <iostream>
#include "Body2D.h"
#include "Parallelogram.h"
#include "Ellipse.h"
#include "Body3D.h"
#include "Box.h"
#include "Ball.h"

using namespace std;

int main()
{
    Vector A{ 0, 1 };
    Vector B{ 2, 4 };
    Vector C{ 8, 5 };

    Vector EllipseCenter{ 1, 2 };

    Vector boxA{ 1, 1, 1 };
    Vector boxG{ 4, 4, 4 };

    Vector ballCenter{ 1, 1, 1 };

    int* ptr = nullptr;
    if (!ptr) 
    {
        
        Parallelogram* parallelogram = new Parallelogram(A, B, C);
        parallelogram->GetPerimeter();
        parallelogram->GetArea();
        parallelogram->GetCenter();
        parallelogram->GetVertices();
 
        Ellipse* ellepse = new Ellipse(EllipseCenter, 2.0, 3.0);
        ellepse->GetPerimeter();
        ellepse->GetArea();
        ellepse->GetCenter();
        ellepse->GetVertices();

        Box* box = new Box(boxA, boxG);
        box->GetPerimeter();
        box->GetArea();
        box->GetVolume();
        box->GetSurfaceArea();
        box->GetVertices();

        Ball* ball = new Ball(ballCenter, 2.2);
        ball->GetPerimeter();
        ball->GetArea();
        ball->GetCenter();
        ball->GetVolume();
        ball->GetSurfaceArea();
        ball->GetVertices();

        delete parallelogram;
        delete ellepse;
        delete box;
        delete ball;
    }
    
}

