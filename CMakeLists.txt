cmake_minimum_required(VERSION 3.31)
project(NetoInherit)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(NetoInherit
        firstTask/main.cpp
        #secondTask/main.cpp
        #thirdTask/main.cpp
        libio.hpp

        #base base class for shapes
        entities/Shape.hpp

        #bundles of figures
        entities/quadangle/Quads.hpp
        entities/triangle/Triangles.hpp

        #Unknown figure
        entities/Figure.cpp
        entities/Figure.hpp

        #triangle
        entities/triangle/Triangle.cpp
        entities/triangle/Triangle.hpp

        entities/triangle/IsoscelesTriangle.cpp
        entities/triangle/IsoscelesTriangle.hpp

        entities/triangle/EquilateralTriangle.cpp
        entities/triangle/EquilateralTriangle.hpp

        entities/triangle/RectangularTriangle.cpp
        entities/triangle/RectangularTriangle.hpp

        #Quadrangle
        entities/quadangle/QuadAngle.cpp
        entities/quadangle/QuadAngle.hpp

        entities/quadangle/Square.cpp
        entities/quadangle/Square.hpp

        entities/quadangle/Parallelogram.cpp
        entities/quadangle/Parallelogram.hpp

        entities/quadangle/Rhomb.cpp
        entities/quadangle/Rhomb.hpp

        entities/quadangle/Rectangle.cpp
        entities/quadangle/Rectangle.hpp
)
