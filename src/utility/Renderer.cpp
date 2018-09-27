//
// Created by dparadiz on 9/27/18.
//

#include "Renderer.h"

std::string Renderer::render(const State &state) {

    std::string output;

    for (auto &row : state.get_data()) {
        for (auto &value: row) {
            output.append(std::to_string(value));
        }
        output.append("\n");
    }

    return output;
}
