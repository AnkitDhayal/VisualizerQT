# Z-Buffer DLL
This repository contains a C++ implementation of a Z-Buffer algorithm as a dynamic-link library (DLL). The Z-Buffer algorithm is commonly used in computer graphics for hidden surface removal and rendering three-dimensional objects.

##  Z_Buffer Class
The Z_Buffer class, defined in Z_Buffer.cpp and Z_Buffer.h, provides functionality to read and process STL files using the Z-Buffer algorithm. The class includes methods to read STL files, extract triangle data, and perform operations such as writing points for visualization.

## Class Methods
reader: Reads an STL file and extracts triangle information, storing it in the provided vector of Triangle objects. Also, a vector of colors (myColorVector) is populated based on the vertices of the triangles.

write: Converts the triangle data into a flat vector (inputPoints) for visualization purposes.

## Usage
To use the Z-Buffer DLL in your project:

Clone the Repository:

bash
Copy code
git clone https://github.com/AnkitDhayal/VisualizerQT/new/main/Visualizer/z-buffer-dll.git
cd z-buffer-dll
Include the Necessary Files in Your Project:

Include the required files (Z_Buffer.cpp and Z_Buffer.h) in your project.

Use the Z_Buffer Class:

Create an instance of the Z_Buffer class and use its methods to read and process STL files.

Example:

cpp
Copy code
#include "Z_Buffer.h"

int main() {
    // Create an instance of Z_Buffer
    Z_Buffer zBuffer;

    // Vector to store triangles and colors
    std::vector<Triangle> triangles;
    std::vector<float> myColorVector;

    // Read an STL file
    zBuffer.reader(triangles, myColorVector);

    // Further processing or visualization
    return 0;
}
# Dependencies
Ensure that your project has the necessary dependencies, including the DLL runtime dependencies.
