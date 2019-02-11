#pragma once

#include <gtest/gtest.h>

#include "../static/Attribute.h"
#include "../static/GridBoard.h"
#include "../static/Piece.h"

using namespace testing;

TEST(PieceTests, Move)
{
    base::GridBoard board(2,2);

    base::Attribute attr("p");

    base::Piece piece1(attr, {0,1}, &board);

    ASSERT_FALSE(board.SquareHaveAttribute({0,0}, attr));
    ASSERT_TRUE(board.SquareHaveAttribute({0,1}, attr));
    ASSERT_FALSE(board.SquareHaveAttribute({1,0}, attr));
    ASSERT_FALSE(board.SquareHaveAttribute({1,1}, attr));

    piece1.Move({1,0});

    ASSERT_FALSE(board.SquareHaveAttribute({0,0}, attr));
    ASSERT_FALSE(board.SquareHaveAttribute({0,1}, attr));
    ASSERT_TRUE(board.SquareHaveAttribute({1,0}, attr));
    ASSERT_FALSE(board.SquareHaveAttribute({1,1}, attr));

}

