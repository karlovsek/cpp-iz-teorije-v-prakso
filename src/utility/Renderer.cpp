#include "Renderer.h"

std::string Renderer::render(const State &state) {

    std::string output;

    for (auto &row : state.data) {
        for (auto &value: row) {
            output.append(std::to_string(value));
        }
        output.append("\n");
    }

    return output;
}
