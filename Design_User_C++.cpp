//
// Ricardo Martinez
// Description: 
// The code will scan the input of the user and create a design chosen by the user
// which will be either stripes, square, checkerboard, or x. 


#include <iostream>
using namespace std;
#include <string>


const int WIDTH = 10;
const int HEIGHT = 10;
enum Shapes { STRIPES, SQUARE, CHECKERBOARD, X };
enum Colors { BLACK, WHITE };
struct Pixel
{
	Colors color;
};
Pixel p[100];


void CreateShape(Pixel p[], int nPixels, Shapes shape)
{
	int i; int j = 0;int k;
	switch (shape) {

	case 0:
		for (i = 0; i < HEIGHT; i++){
			for (j = 0; j < WIDTH; j++) {
				
					if ((i % 2) == 0)
			{

				p[i*HEIGHT + j].color = Colors::BLACK;
			}

			else
			{
				p[i*HEIGHT + j].color = Colors::WHITE;
			}
		}
		break;

	case 1:
		i = 0;
		for (i = 0; i < nPixels; i++)
		{


		}

	case 2:
		for (i = 0; i < nPixels; i++)
		{
			if (i % 10)
			{
				if ((i % 2) == 0)
				{
					p[i].color = Colors::BLACK;
				}
				else
				{
					p[i].color = Colors::WHITE;
				}

				k = 1;
			}
			else
			{
				if ((i % 2) == 1)
				{
					p[i].color = Colors::BLACK;
				}
				k = 0;
			}
		}break;


	}
	};


	void Draw(Pixel p[], int nPixels) {

		int i; int j;
		for (i = 0; i < HEIGHT; i++)
		{
			for (j = 0; j < WIDTH; j++)
			{
				if (p[i*WIDTH + j].color == BLACK)
				{

					cout << "|||";
				}
				else
				{
					cout << " ";
				}
				cout << "\n";
			}
		}
	};


	int main()
	{
		Shapes shape1 = Shapes::STRIPES;
		Shapes shape2 = Shapes::SQUARE;
		Shapes shape3 = Shapes::CHECKERBOARD;
		Shapes shape4 = Shapes::X;
		std::cout << "What shape would you like: Stripes, Square, Checkerboard,X";
		string input;
		cin >> input;

		if (input == "Stripes")
		{
			CreateShape(p, 100, Shapes::STRIPES); Draw(p, 100);
		}
		if (input == "Square")
		{
			CreateShape(p, 100, Shapes::SQUARE); Draw(p, 100);
		}
		if (input == "Checkerboard")
		{
			CreateShape(p, 100, Shapes::CHECKERBOARD); Draw(p, 100);
		}
		if (input == "X")
		{
			CreateShape(p, 100, Shapes::X); Draw(p, 100);
		}

		return 0;



	}//main