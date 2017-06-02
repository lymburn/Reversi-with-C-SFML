//
//  texturemanager.cpp
//  Reversi
//
//  Created by Eugene Lu on 2017-06-01.
//  Copyright © 2017 Eugene Lu. All rights reserved.
//
#include "texturemanager.hpp"
#include "ResourcePath.hpp"
#include <iostream>

//Loads the texture for the board

void TextureManager::loadBoardTexture() {
    if (!boardTexture.loadFromFile(resourcePath() + "board.gif")) {
        std::cout<<"texture not loaded"<<std::endl;
        return EXIT_FAILURE;
    }
}

void TextureManager::loadWhiteTexture() {
    if (!whiteTexture.loadFromFile(resourcePath() + "white.png")) {
        return EXIT_FAILURE;
    }
}

void TextureManager::loadBlackTexture() {
    if (!blackTexture.loadFromFile(resourcePath() + "black.png")) {
        return EXIT_FAILURE;
    }
}


