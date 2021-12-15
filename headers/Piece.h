//
// Created by Robert on 12/12/2021.
//

#ifndef MODERN_CHESS_PIECE_H
#define MODERN_CHESS_PIECE_H

#include "Textures.h"


enum class Side {
    EMPTY = 0, BLACK = 1, WHITE = 2
};

/// Can make class Piece absctract class, but I will use class Piece as an empty space
class Piece {
protected:
    int code;
    Side side;

    sf::Sprite pSprite;

public:
    Piece();
    virtual ~Piece();
    virtual void canMove();

    void drawPiece(sf::RenderWindow &window);
    void setPosition(float x, float y);
    void setScale(float x, float y);
    void setOrigin(float x, float y);

    friend std::ostream& operator<<(std::ostream& os, const Piece& piece);
};


class Pawn : public Piece {

public:
    Pawn(const Side& side);
    ~Pawn() override;
    void canMove() override;

};


class Knight : public Piece {
public:
    Knight(const Side& side);
    ~Knight() override;
    void canMove() override;
};


class Bishop : public Piece {
public:
    Bishop( const Side& side);
    ~Bishop() override;
    void canMove() override;
};


class Rook : public Piece {
public:
    Rook(const Side& side);
    ~Rook() override;
    void canMove() override;
};


class Queen : public Piece {
public:
    Queen(const Side& side);
    ~Queen() override;
    void canMove() override;
};


class King : public Piece {
public:
    King(const Side& side);
    ~King() override;
    void canMove() override;
};


#endif //MODERN_CHESS_PIECE_H
