# Bezier Curve DLL

This repository contains a C++ implementation of a Bezier curve as a dynamic-link library (DLL). Bezier curves are widely used in computer graphics and CAD applications for smooth curve interpolation.

## BezierCurve Class

The `BezierCurve` class, defined in `BezierCurve.cpp` and `BezierCurve.h`, represents a Bezier curve. The class is initialized with a vector of control points.

### Class Methods

- **calculateBezier:** Calculates points along the Bezier curve by evaluating it at various parameter values (`t`). The method returns a vector of `Point3D` representing the points on the curve.

- **evaluateBezier:** Evaluates the Bezier curve at a specific parameter `t` using the De Casteljau's algorithm.

## Usage

To use the Bezier curve DLL in your project:

1. Clone the repository:

    ```bash
    git clone https://github.com/AnkitDhayal/Visualizer/bezier-curve-dll.git
    cd bezier-curve-dll
    ```

2. Include the necessary files in your project (e.g., `BezierCurve.cpp`, `BezierCurve.h`).

3. Create an instance of the `BezierCurve` class, passing the control points to the constructor.

4. Use the `calculateBezier` method to obtain points along the Bezier curve.

```cpp
#include "BezierCurve.h"

int main() {
    // Example: create a Bezier curve with control points
    std::vector<Point3D> controlPoints = { /* ... */ };
    BezierCurve bezierCurve(controlPoints);

    // Calculate points along the Bezier curve
    std::vector<Point3D> curvePoints = bezierCurve.calculateBezier();

    // Further processing or visualization
    return 0;
}
