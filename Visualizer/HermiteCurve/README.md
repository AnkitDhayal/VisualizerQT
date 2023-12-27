# Hermite Curve DLL

This repository contains a C++ implementation of a Hermite curve as a dynamic-link library (DLL). Hermite curves are used in computer graphics and computer-aided design to interpolate a set of points with specified tangent vectors.

## HermiteCurve Class

The `HermiteCurve` class, defined in `HermiteCurve.cpp` and `HermiteCurve.h`, represents a Hermite curve. The class is initialized with a vector of control points, each accompanied by a specified tangent vector.

### Class Methods

- **calculateHermite:** Calculates points along the Hermite curve by evaluating it at various parameter values (`t`). The method returns a vector of `Point3D` representing the points on the curve.

- **evaluateHermite:** Evaluates the Hermite curve at a specific parameter `t` using the Hermite basis functions.

## Usage

To use the Hermite Curve DLL in your project:

1. Clone the repository:

    ```bash
    git clone https://github.com/AnkitDhayal/VisualizerQT/new/main/Visualizer/ hermite-curve-dll.git
    cd hermite-curve-dll
    ```

2. Include the necessary files in your project (e.g., `HermiteCurve.cpp`, `HermiteCurve.h`).

3. Create an instance of the `HermiteCurve` class, passing the control points with tangent vectors to the constructor.

4. Use the `calculateHermite` method to obtain points along the Hermite curve.

Example:

```cpp
#include "HermiteCurve.h"

int main() {
    // Example: create a Hermite curve with control points and tangent vectors
    std::vector<Point3D> controlPoints = { /* ... */ };
    HermiteCurve hermiteCurve(controlPoints);

    // Calculate points along the Hermite curve
    std::vector<Point3D> curvePoints = hermiteCurve.calculateHermite();

    // Further processing or visualization
    return 0;
}
