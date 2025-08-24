#include "../libio.hpp"
#include <concepts>

#include "../entities/triangle/Triangles.hpp"
#include "../entities/quadangle/Quads.hpp"

template<typename T>
concept figurable = std::derived_from<T, Triangle> || std::derived_from<T, QuadAngle> || std::same_as<T, Figure>;

/**
 * Ultimate function for print info of objects with concepts.
 * @tparam type concept constraint.
 * @param object constrained object of constraint type for constrain value.
 */
template<figurable type>
void print_info(const type &object) {
    libio::output::println(object.get_name() + ":");
    libio::output::println(object.self_check() ? "Правильная" : "Неправильная");
    libio::output::println("Количество сторон: " + std::to_string(object.get_side_count()));
    object.print_side_values();
    object.print_corners();
}

int main() {
    const Figure figure{};
    const Triangle triangle{10, 20, 30, 50, 60, 70};
    const RectangularTriangle rectangularTriangle1{10, 20, 30, 50, 60};
    const RectangularTriangle rectangularTriangle2{10, 20, 30, 50, 40};
    const IsoscelesTriangle isoscelesTriangle{10, 20, 50, 60};
    const EquilateralTriangle equilateralTriangle{30};

    const QuadAngle quadrangle{10, 20, 30, 40, 50, 60, 70, 80};
    const Rectangle rectangle{10, 20};
    const Square square{20};
    const Parallelogram parallelogram{20, 30, 30, 40};
    const Rhomb rhomb{30, 30, 40};

    print_info(figure);
    libio::output::println();

    print_info(triangle);
    libio::output::println();

    print_info(rectangularTriangle1);
    libio::output::println();

    print_info(rectangularTriangle2);
    libio::output::println();

    print_info(isoscelesTriangle);
    libio::output::println();

    print_info(equilateralTriangle);
    libio::output::println();

    print_info(quadrangle);
    libio::output::println();

    print_info(rectangle);
    libio::output::println();

    print_info(square);
    libio::output::println();

    print_info(parallelogram);
    libio::output::println();

    print_info(rhomb);
}
