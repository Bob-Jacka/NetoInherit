#include "../libio.hpp"
#include "../entities/Figure.hpp"
#include "../entities/quadangle/QuadAngle.hpp"
#include "../entities/triangle/Triangle.hpp"

template<typename T>
concept firstTaskable = std::same_as<T, Figure> || std::same_as<T, Triangle> || std::same_as<T, QuadAngle>;

void to_string(firstTaskable auto type_object) {
    std::cout << type_object.get_name() << ": " << type_object.get_side_count() << std::endl;
};

int main() {
    Figure figure{};
    Triangle triangle{};
    QuadAngle quadAngle{};

    libio::output::println("Количество сторон:");
    to_string(figure);
    to_string(triangle);
    to_string(quadAngle);
}
