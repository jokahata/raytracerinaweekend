//
//  main.cpp
//  raytracyer
//
//  Created by John Okahata on 2/3/19.
//  Copyright © 2019 John Okahata. All rights reserved.
//

#include <iostream>
#include "vec3.hpp"

int main(int argc, const char * argv[]) {
    int nx = 200;
    int ny = 100;
    std::cout << "P3\n" << nx << " " << ny << "\n255\n";
    for (int j = ny - 1; j >= 0; j--) {
        for (int i = 0; i < nx; i++) {
            vec3 col(float(i) / float(nx), float(j) / float(ny), 0.2);
            int ir = int(255.99*col[0]);
            int ig = int(255.99*col[0]);
            int ib = int(255.99*col[0]);
            std::cout << ir << " " << ig << " " << ib << "\n";
        }
    }
}
