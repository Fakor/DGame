#pragma once

#include <gtest/gtest.h>

#include <memory>

#include "../static/position.h"
#include "../static/Attribute.h"
#include "../static/GridBoard.h"
#include "../static/Piece.h"
#include "../static/direction.h"

#include "../static/Move.h"

using namespace testing;

TEST(BoardTests, SetupBoard){
    base::GridBoard board(3,3);

    base::Position pos1(0,1);
    base::Square& square1 = board.GetSquare(pos1);

    ASSERT_EQ(pos1, square1.GetPosition());

    base::Position pos2(2,2);
    base::Square& square2 = board.GetSquare(pos2);

    ASSERT_EQ(pos2, square2.GetPosition());
    ASSERT_NE(pos1, pos2);
}

TEST(BoardTests, ActionMoveUp){
    base::GridBoard board(2,5);

    rules::Move move(4, {base::direction::Up});

    base::PossibleMoves actual_possible_moves = move.GetPossibleMoves({0,1}, board);

    std::vector<base::Position> expected_possible_moves({{0,2},{0,3},{0,4}});

    ASSERT_EQ(expected_possible_moves.size(), actual_possible_moves.size());
    for(auto possible_move: actual_possible_moves){
        auto result = std::find(expected_possible_moves.begin(), expected_possible_moves.end(), possible_move->GetPosition());

        EXPECT_NE(result, expected_possible_moves.end()) << "This move was not expected (" << possible_move->GetPosition().X() << ", " << possible_move->GetPosition().Y() << ")";
    }
}

TEST(BoardTests, ActionMoveRight){
    base::GridBoard board(5,5);

    rules::Move move(1, {base::direction::Right});

    base::PossibleMoves actual_possible_moves = move.GetPossibleMoves({1,2}, board);

    std::vector<base::Position> expected_possible_moves({{2,2}});

    ASSERT_EQ(expected_possible_moves.size(), actual_possible_moves.size());
    for(auto possible_move: actual_possible_moves){
        auto result = std::find(expected_possible_moves.begin(), expected_possible_moves.end(), possible_move->GetPosition());

        EXPECT_NE(result, expected_possible_moves.end()) << "This move was not expected (" << possible_move->GetPosition().X() << ", " << possible_move->GetPosition().Y() << ")";
    }
}

TEST(BoardTests, ActionMoveLeft){
    base::GridBoard board(5,5);

    rules::Move move(3, {base::direction::Left});

    base::PossibleMoves actual_possible_moves = move.GetPossibleMoves({3,2}, board);

    std::vector<base::Position> expected_possible_moves({{2,2}, {1,2}, {0,2}});

    ASSERT_EQ(expected_possible_moves.size(), actual_possible_moves.size());
    for(auto possible_move: actual_possible_moves){
        auto result = std::find(expected_possible_moves.begin(), expected_possible_moves.end(), possible_move->GetPosition());

        EXPECT_NE(result, expected_possible_moves.end()) << "This move was not expected (" << possible_move->GetPosition().X() << ", " << possible_move->GetPosition().Y() << ")";
    }
}

TEST(BoardTests, ActionMoveDown){
    base::GridBoard board(5,5);

    rules::Move move(3, {base::direction::Down});

    base::PossibleMoves actual_possible_moves = move.GetPossibleMoves({3,2}, board);

    std::vector<base::Position> expected_possible_moves({{3,1}, {3,0}});

    ASSERT_EQ(expected_possible_moves.size(), actual_possible_moves.size());
    for(auto possible_move: actual_possible_moves){
        auto result = std::find(expected_possible_moves.begin(), expected_possible_moves.end(), possible_move->GetPosition());

        EXPECT_NE(result, expected_possible_moves.end()) << "This move was not expected (" << possible_move->GetPosition().X() << ", " << possible_move->GetPosition().Y() << ")";
    }
}

TEST(BoardTests, MovePiecesInDirection){
    base::GridBoard board(3,4);
    base::Piece p1;
    base::Piece p2;

    board.AddPiece(&p1, {1,2});
    board.AddPiece(&p2, {0,0});

    ASSERT_EQ(base::Position(1,2), board.GetPiecePosition(&p1));
    ASSERT_EQ(base::Position(0,0), board.GetPiecePosition(&p2));

    p1.SetDirection(base::direction::Up);
    p2.SetDirection(base::direction::Right);

    board.PerformTurn();

    ASSERT_EQ(base::Position(1,3), board.GetPiecePosition(&p1));
    ASSERT_EQ(base::Position(1,0), board.GetPiecePosition(&p2));
}

