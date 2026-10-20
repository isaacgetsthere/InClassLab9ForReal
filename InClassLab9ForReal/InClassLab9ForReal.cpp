#include <iomanip>
#include <string>
#include <iostream>

int main()
{
    std::string continueOrNot;
    std::cout << "Do you want to input shapes and determine stuff about them?" << std::endl;
    std::getline(std::cin, continueOrNot);
    //do
    //{
    //    //loop body 
    //} while (true); 

    while (continueOrNot == "yes")
    {

        //must update continueOrNot variable value in order to not have an infinite loop 
        std::cout << "Enter a shape type (only rectangle,circle,cylinder): " << std::endl;
        std::string shape;
        std::cin >> shape;

        if (shape == "rectangle" || shape == "Rectangle")
        {
            float length;
            float width;
            std::cout << "Enter the length and width of the rectangle" << std::endl;
            std::cin >> length >> width;

            float area = length * width;

            std::cout << "The area of the rectangle is " << area << std::endl;
        }

        else if (shape == "circle" || shape == "Circle")
        {
            float radius;
            std::cout << "Enter the radius of the circle" << std::endl;
            std::cin >> radius;
            std::cout << "The area of the circle: "
                << 3.14159265 * radius * radius << std::endl;
        }

        else if (shape == "cylinder" || shape == "Cylinder")
        {
            float radius;
            float height;
            std::cout << "Enter the radius and height" << std::endl;
            std::cin >> radius >> height; //1 2 \n

            std::cout << "The area of the cylinder is "
                << 3.14159265 * radius * radius * height << std::endl;
        }

        else
        {
            std::cout << "This program doesn't support the shape you provided" << std::endl;
        } //end else

        std::cin.ignore();
        std::cin.clear();

        std::cout << "Do you STILL want to input shapes and determine stuff about them?" << std::endl;
        std::getline(std::cin, continueOrNot);

    } //end while
} //end main 