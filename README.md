# Visualizer Project with OpenGL
This repository contains the source code for the Visualizer project, an interactive application built using Qt and OpenGL for visualizing geometric shapes, curves, and implementing the Z-Buffer algorithm. The project utilizes custom libraries for Hermite, Bezier, Spline, and Geometry operations.

## Project Structure
Visualizer: The main application class that manages the user interface and interaction.
OpenGLWindow: A custom OpenGL widget where rendering and visualization take place.
Geometry Library: Classes and functions for basic geometric operations (e.g., points, lines, shapes).
Hermite, Bezier, Spline Libraries: Libraries providing functionality for Hermite, Bezier, and B-Spline curve calculations.
Z-Buffer Library: A library implementing the Z-Buffer algorithm for 3D rendering.
OpenGL Implementation
Shader Files
vertexShader.glsl: Vertex shader source code.
fragmentShader.glsl: Fragment shader source code.
## Features
Mouse Interaction: The application supports mouse interaction for rotating the rendered scene.
Curve Rendering: Hermite, Bezier, and B-Spline curves are rendered based on user input.
Triangle Rendering: Triangles can be rendered using the Z-Buffer algorithm.
Color Palette: The color palette is implemented using fragment shaders for customization.
## How to Run the Project
Ensure you have Qt installed on your system.
Open the project in Qt Creator.
Build and run the project.
## Clone the project 
git clone https://github.com/AnkitDhayal/VisualizerQT.git
## Usage
Click the "ADD" button to add points for curve rendering.
Use the "Bezier Curve," "Hermite Curve," and "BSplineCurve Curve" buttons to visualize different types of curves.
"Read STL File" and "Show STL File" buttons are available for reading and displaying STL files.
The "Color" button opens a color dialog to customize the color palette.
## Dependencies
Qt: The project relies on the Qt framework for GUI and OpenGL integration.
