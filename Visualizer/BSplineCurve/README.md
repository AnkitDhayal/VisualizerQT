# B-Spline Curve Implementation

This repository provides a simple implementation of a B-spline curve using OpenGL for visualization. B-spline curves are widely used in computer graphics and CAD applications for smooth curve interpolation. This README will guide you through the steps of implementing and using the B-spline curve in this project.
## Implementation Details

The B-spline curve implementation is encapsulated in the `BSplineCurve` class, defined in the `BSplineCurve.cpp` file. The class constructor takes the degree of the B-spline curve as a parameter.

### Class Methods

- **generateUniformKnots:** Generates uniform knots for the B-spline curve based on the number of control points.

- **bSplineBasis:** Computes the B-spline basis function for a given control point index, degree, parameter 't', and the knot vector.

- **evaluate:** Evaluates the B-spline curve given a set of control points and a parameter 't'. The function returns a vector of `Point3D` representing the points on the B-spline curve.

