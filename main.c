/* Copyright (C) 2023 Jonas Vanhulst & Jasper Maes - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the XYZ license, which unfortunately won't be
 * written for another century.
 *
 * Check LICENCE.md for details
 * Check Miro: https://miro.com/app/board/uXjVP0D8dY8=/?share_link_id=918258710556
 */

//** Include build-in headers
#include <stdio.h>

//** Include custom headers
#include "Minesweeper.h"

int main() {
    // Print welcome message to user
    printHeader();

    // Setup the game
    playMinesweeper();

    return 0;
}