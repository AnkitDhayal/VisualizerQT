# Geometry DLL

This repository contains a C++ implementation of geometric classes and operations as a dynamic-link library (DLL). The classes include Point, Point3D, Line, Shape, Triangle, and Triangulation, providing a foundation for geometric computations.

## Classes

### 1. Point

The `Point` class represents a 2D point with x and y coordinates.

### 2. Point3D

The `Point3D` class extends the `Point` class to represent a 3D point with additional z coordinate.

### 3. Line

The `Line` class defines a line segment connecting two points.

### 4. Shape

The `Shape` class is an abstract base class for geometric shapes. It provides common functionality for shapes.

### 5. Triangle

The `Triangle` class inherits from the `Shape` class and represents a 2D triangle with three vertices.

### 6. Triangulation

The `Triangulation` class provides methods for triangulating a set of points, generating triangles based on a specified algorithm.

## Usage

To use the Geometry DLL in your project:

1. Clone the repository:

    ```bash
    git clone https://github.com/AnkitDhayal/VisualizerQT/new/main/Visualizer/Geometry-dll.git
    cd geometry-dll
    ```

2. Include the necessary files in your project (e.g., `Point.cpp`, `Point.h`, `Line.cpp`, `Line.h`, etc.).

3. Instantiate the geometric classes based on your application requirements.

4. Use the provided methods for geometric computations and operations.

Example:

```cpp
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Triangulation.h"

int main() {
    // Example: create and use geometric classes
    Point p1(0, 0);
    Point p2(1, 1);
    
    Line line(p1, p2);
    double length = line.length();

    Triangle triangle(p1, p2, Point(2, 0));
    double area = triangle.calculateArea();

    // Further processing or visualization
    return 0;
}
