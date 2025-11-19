#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> result;
    result.reserve(people.size());

    // Zwiększamy wiek
    for (Human& h : people)
        h.birthday();

    // Dodajemy 'y' lub 'n'
    for (const Human& h : people)
        result.push_back(h.isMonster() ? 'n' : 'y');

    // Odwrócenie kolejności
    std::reverse(result.begin(), result.end());

    return result;
    return {};
}
